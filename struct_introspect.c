struct foo {
	char *str;
};
int main() {
	struct foo bar;
	bar.str = "Hello World!";
	printf("%s\n", gettype(bar)->name);
	printf("%s\n", gettype(bar.str)->name);
}
