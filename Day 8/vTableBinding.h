#pragma once
class MathComponent {
public:
	virtual void VirtualFunction() {//The function is not mapped to the object untill its instantiated....
		print("Virtual Function is called");
	}
	virtual void addFunc(int v1, int v2, int* res) {
		*res = v1 + v2;
	}

	virtual void subFunc(int v1, int v2, int* res) {
		*res = v1 - v2;
	}

	void mulFunc(int v1, int v2, int* res) {
		*res = v1 * v2;
	}

	void divFunc(int v1, int v2, int* res) {
		if (v2 == 0)
			throw "Divide be 0 is not allowed";
		*res = v1 / v2;
	}
};

