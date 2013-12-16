// Includes go here
struct foo { char *str; };
int main( int argc, char *argv[] ) {
	struct foo bar;
	bar.str = "Hello World!";
	ruminate_init(argv[0], NULL);
	RType *type = ruminate_get_type(bar, NULL);
	RAggregateType *agg_type = (RAggregateType *) type;
	RAggregateMember *type_member =
		r_aggregate_type_member_by_name(agg_type, "str", NULL);
	RType *member_type = r_type_member_type(
		    (RTypeMember *) type_member, NULL);
	RString *member_name = r_type_name(member_type, NULL);
	const char *member_name_str = r_string_bytes(member_name);
	printf("%s\n", member_name_str);
}
