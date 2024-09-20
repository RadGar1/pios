


void kernel_main() {

	extern int __bss_start, __bss_end;
	char *bssstart, *bssend;

	bssstart = &__bss_start;
	bssend = &__bss_end;

	for (int *i = bssstart; *i < bssend; *i++){
		*i = 0;
	}

    while(1){
    }
}
