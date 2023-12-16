class Person
{
public:
	Person(int age,int height) {
		m_Age = age;
		m_Height = new int(height);
	}
	Person(const Person& p) {
		m_Age = p.m_Age;
		m_Height = new int (*p.m_Height);
	}
	~Person() {
		if (m_Height != NULL) {
			delete m_Height;
		}
		m_Height = NULL;
	}
	int m_Age;
	int* m_Height;
};
void test01() {
	Person p1(18,170);
	Person p2(p1);
	cout << "age:" << p2.m_Age << " height:" << *p2.m_Height << endl;
}
int main(int argc, char* argv[]) {
	test01();
	system("pause");
	return 0;
}
