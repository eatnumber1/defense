struct foo {
	char *str;
};
int main() {
	struct foo bar;
	bar.str = "Hello World!";
	asm("int $0x3");
}
