/**
 *
 *
 *
 *
 * 
 *	
*/
#include <stdio.h>
#include <option_handler.h>

int main(int argc, char ** argv){
	struct options opts = {0};

	process_options(argc, argv, &opts);

	printf("The structs f_flag is now %d\n", opts.f_flag);
	
	print_struct(&opts);
	return 0;
}
