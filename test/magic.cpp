class Magic {
	public:
		Magic(int num) : number_(num) {
		}
		int getMagicNumber() const {
			return number_;
		}

	private:
		int number_;
};

extern "C" int magic() {
	return Magic(42).getMagicNumber();
}
