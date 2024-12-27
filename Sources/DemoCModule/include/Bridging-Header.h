#ifndef DEMO_C_MODULE
#define DEMO_C_MODULE

void demo_c_module_hello_world();

struct demo_c_struct {
	int i;
//	int ints[]; // Compiler crashes without this.
} __attribute__((__swift_attr__("BitwiseCopyable")));

#endif
