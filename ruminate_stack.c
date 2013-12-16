// Includes go here
void print_backtrace() {
	RFrameList *frames = ruminate_backtrace(NULL);
	size_t frames_len = r_frame_list_size(frames, NULL);
	for( size_t i = 0; i < frames_len; i++ )
		printf("%s\n", r_string_bytes(r_frame_function_name(
		               r_frame_list_at(frames, i, NULL), NULL)));
}
void bar( int i ) { if( i < 2 ) bar(i + 1); else print_backtrace(); }
void foo() { bar(0); }
int main( int argc, char *argv[] ) {
	ruminate_init(argv[0], NULL);
	foo();
}
