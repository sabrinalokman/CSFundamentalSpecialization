class Stack {
public:
	void push_back(const Cube & cube);
	Cube removeTop();
	Cube & peekTop();
	unsigned size() const;

	friend std::ostream& operator << (std::ostream & os, const Stack & stack);

private:
	std::vector<Cube> cubes_;
};