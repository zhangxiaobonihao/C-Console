#include <iostream>

using namespace std;

class singleton
{
	private:
		//static singleton * m_ptr;
		singleton()
		{
			cout<<"singleton()."<<endl;
		}
		singleton(const singleton & value);
		singleton & operator=(const singleton & value);

	public:
		static singleton& createSingleton()
		{
			static singleton instance;
			return instance;
		}

		~singleton()
		{
			
			cout<<"~singleton"<<endl;
		}
};


int main(int argc, char* argv[])
{
	singleton& ptr = singleton::createSingleton();
}
