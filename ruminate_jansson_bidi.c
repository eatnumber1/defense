// Includes go here
struct MyStruct {
	int i;
	enum MyEnum { MY_ENUM_VALUE_1, MY_ENUM_VALUE_2 } e;
};
int main( int argc, char *argv[] ) {
	ruminate_init(argv[0], NULL);
	struct MyStruct foo = { 1, MY_ENUM_VALUE_2 };
	JsonState *js = json_state_new();
	json_state_set_flags(js, JSON_FLAG_INVERTABLE);
	json_dumpf(
		json_serialize(js, ruminate_get_type(foo, NULL),
		               &foo, NULL),
		stdout, 0
	);
}
