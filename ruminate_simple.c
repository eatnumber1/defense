// Includes go here
struct foo {
	char *str;
};
int main( int argc, char *argv[] ) {
	struct foo bar;
	bar.str = "Hello World!";
	ruminate_init(argv[0], NULL);
	printf("%s\n", r_string_bytes(r_type_name(
	  ruminate_get_type(bar, NULL), NULL)));
	printf("%s\n", r_string_bytes(r_type_name(
	  ruminate_get_type(bar.str, NULL), NULL)));
}
