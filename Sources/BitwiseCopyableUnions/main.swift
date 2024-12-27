import DemoCModule

demo_c_module_hello_world()

func printACopy<T: BitwiseCopyable>(_ value: T) {
	print(value)
}

printACopy(demo_simple_struct())

printACopy(demo_struct_with_union())
// ❌ requires that 'demo_struct_with_union' conform to 'BitwiseCopyable'

printACopy(demo_copyable_struct_with_union())

printACopy(demo_struct_with_copyable_union())
