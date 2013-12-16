// Includes go here
int main( int argc, char *argv[] ) {
	ruminate_init(argv[0], NULL);
	const char *src_str = "Hello World!";
	size_t src_str_len = strlen(src_str) + 1;
	void *str = r_mem_malloc_sized(
		char *, src_str_len, NULL
	);
	memcpy(str, src_str, src_str_len);
	printf("(%s) \"%s\"\n", r_string_bytes(r_type_name(
		r_mem_type(str),
		NULL
	)), str);
}
