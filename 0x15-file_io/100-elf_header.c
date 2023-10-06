#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error(const char *message) {
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

void display_elf_header_info(Elf64_Ehdr *header) {
	printf("ELF Header:\n");
	printf("	Magic:   %02x %02x %02x %02x\n", header->e_ident[EI_MAG0], header->e_ident[EI_MAG1], header->e_ident[EI_MAG2], header->e_ident[EI_MAG3]);
	printf("	Class:							 ");
	switch (header->e_ident[EI_CLASS]) {
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid class\n");
			break;
	}
	printf("	Data:							  ");
	switch (header->e_ident[EI_DATA]) {
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Invalid data encoding\n");
			break;
	}
	printf("	Version:						   %d (current)\n", header->e_ident[EI_VERSION]);
	printf("	OS/ABI:							");
	switch (header->e_ident[EI_OSABI]) {
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
			break;
	}
	printf("	ABI Version:					   %d\n", header->e_ident[EI_ABIVERSION]);
	printf("	Type:							  ");
	switch (header->e_type) {
		case ET_NONE:
			printf("NONE (Unknown Type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Unknown Type\n");
			break;
	}
	printf("	Entry point address:			   0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
	const char *filename;
	int fd;
	Elf64_Ehdr header;
	
	if (argc != 2) {
		print_error("Usage: elf_header elf_filename");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);

	if (fd == -1) {
		print_error("Could not open file");
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header)) {
		close(fd);
		print_error("Could not read ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
		close(fd);
		print_error("Not an ELF file");
	}

	display_elf_header_info(&header);

	close(fd);
	return (0);
}

