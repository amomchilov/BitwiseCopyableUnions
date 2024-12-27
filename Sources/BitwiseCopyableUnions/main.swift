import DemoCModule

let crasher = demo_c_struct()

func doesntCrash1(_ takeItAsAParam: demo_c_struct) {}
func doesntCrash2() -> demo_c_struct {
	fatalError("not implemented")
}
func doesntCrash3() {
	// pass it as an argument
	doesntCrash1(doesntCrash2())
}
