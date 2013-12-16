// Includes go here
struct MyStruct {
	int i;
	enum MyEnum { MY_ENUM_VALUE_1, MY_ENUM_VALUE_2 } e;
};
int main( int argc, char *argv[] ) {
	ruminate_init(argv[0], NULL);
	struct MyStruct foo = { 1, MY_ENUM_VALUE_2 };
	json_dumpf(
		json_serialize(NULL, ruminate_get_type(foo, NULL),
		               &foo, NULL),
		stdout, 0
	);
}
