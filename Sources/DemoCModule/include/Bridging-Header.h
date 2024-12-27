#ifndef DEMO_C_MODULE
#define DEMO_C_MODULE

#include <stdbool.h>

void demo_c_module_hello_world();

union demo_union {
	char c;
};

union demo_copyable_union {
	char c;
} __attribute__((__swift_attr__("BitwiseCopyable")));

// Imports as implicitly BitwiseCopyable
struct demo_simple_struct {
	int i;
};

// Imports as *not* BitwiseCopyable because of the union member
struct demo_struct_with_union {
	union demo_union u;
};

// Imports as explicitly BitwiseCopyable
struct demo_copyable_struct_with_union {
	union demo_union u;
	int ints[]; // Compiler crashes without this.
} __attribute__((__swift_attr__("BitwiseCopyable")));

// Imports as implicitly BitwiseCopyable because the union is explicitly marked `BitwiseCopyable`.
struct demo_struct_with_copyable_union {
	union demo_copyable_union u;
};

#endif
