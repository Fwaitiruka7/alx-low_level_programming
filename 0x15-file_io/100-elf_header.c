#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <elf.h>
#include "main.h"
/**
 * main - prints out the  heafer details of elif
 * @argc: no. of arguments
 * @argv: arg vector
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	Elf64_Ehdr header;
	const char *filename;
	int fd;
	
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
		return 98;
	}
	
	filename = argv[1];
	
	fd = open(filename, O_RDONLY);
	
	if (fd == -1)
	{
		print_error(strerror(errno));
		return 98;
	}
	
	/*Read the ELF header*/
	
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error(strerror(errno));
		return 98;
	}
	
	
	/*check that the file is an ELF file*/
	if (header.e_ident[EI_MAG0] != ELFMAG0 
			|| header.e_ident[EI_MAG1] != ELFMAG1
			|| header.e_ident[EI_MAG2] != ELFMAG2
			|| header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
		return 98;
	}
	
	/*Print the header information*/
	printf("Magic:                               %02x %02x %02x %02x\n", header.e_ident[EI_MAG0], header.e_ident[EI_MAG1],header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);
	printf("Class: %s\n", 
		    header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
		    header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
		    header.e_ident[EI_CLASS] == ELFCLASSNONE ? "none" : "unknown");
	
	printf("Data:                             %s\n",
			header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
			header.e_ident[EI_DATA] == ELFDATANONE ? "none" : "unknown");
	
	printf("Version:                           %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:                            %s\n",
			header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_HPUX ? "HP-UX ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "NetBSD ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_LINUX ? "Linux ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "Solaris ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_AIX ? "AIX ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_FREEBSD ? "FreeBSD ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_OPENBSD ? "OpenBSD ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_STANDALONE ? "Standalone (embedded) ABI" :
			"unknown");
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			header.e_type == ET_NONE ? "NONE (Unknown type)" :
			header.e_type == ET_REL ?  "REL (Relocatable file)" :
			header.e_type == ET_EXEC ? "EXEC (Executable file)" :
			header.e_type == ET_DYN ? "DYN (Shared object file)" :
			header.e_type == ET_CORE ? "CORE (Core file)" :
			"unknown");
	printf("Entry point address:               0x%lx\n", (unsigned long)header.e_entry);
	return (0);
}
void print_error(const char *msg)
{
	dprintf(STDERR_FILENO, "Error: %s\n", msg);
}
