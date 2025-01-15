#pragma once

#include <iostream> 
#include <array>
#include <string> 
#include <stdlib.h> 
#include <memory>
#include <vector>

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;

	}

	String(const String& other)
		:m_Size(other.m_Size)
	{
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);

		std::cout << "Class copied!" << std::endl;


	}

	~String()
	{
		delete[] m_Buffer;
	}

	char& operator[](unsigned int index)
	{
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);

};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}

void PrintString(const String& string)
{
	std::cout << string << std::endl;
}

int main()
{

	String string = "test";
	String string2 = string;

	string2[2] = 'n';

	PrintString(string);
	PrintString(string2);


	std::cin.get();
}









struct Vertex
{
	float x, y, z;

};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

//void Function(const std::vector<Vertex>& vertices)
//{
//
//}

int main()
{
	std::vector<Vertex> vertices;

	vertices.push_back({ 1, 2, 3 });
	vertices.push_back({ 4, 5, 6 });

	for (int i = 0; i < vertices.size(); i++)
	{
		std::cout << vertices[i] << std::endl;
	}


	for (Vertex& v : vertices)
	{
		std::cout << v << std::endl;
	}

	vertices.erase(vertices.begin() + 1);
	vertices.clear();

	//Vertex* vertices = new Vertex[5]; 



	std::cin.get();


}










//#include <iostream>
//#include <string> 
//#include <vector>
//#include <thread> 
//#include <chrono>
//
//static bool s_Finished = false; 
//
//void Dowork()
//{
//	while (!s_Finished)
//	{
//		using namespace std::literals::chrono_literals; 
//		std::cout << "working...\n";
//		std::this_thread::sleep_for(1s); 
//	}
//	
//}
//
//int main()
//{
//
//	std::thread worker(Dowork); 
//
//	std::cin.get();
//	s_Finished = true; 
//
//	worker.join(); 
//	std::cout << "Done! " << "Yippee" << std::endl;
//	std::cin.get();
//
//}














#include <iostream>
//#include <thread> 
//#include <chrono>
//
//static bool s_Finished = false; 
//
//void Dowork()
//{
//
//	while (!s_Finished)
//	{
//		std::cout << "working...\n";
//	}
//	std::cout << "id:  " << std::this_thread::get_id() << std::endl;
//
//}
//
//struct Timer
//{
//	std::chrono::time_point<std::chrono::steady_clock> start, end; 
//	std::chrono::duration<float> duration; 
//
//	Timer()
//	{
//		start = std::chrono::high_resolution_clock::now(); 
//	}
//
//	~Timer()
//	{
//		end = std::chrono::high_resolution_clock::now(); 
//		duration = end - start; 
//
//		float ms = duration.count() * 1000.0f; 
//		std::cout << "timer took " << ms << "ms" << std::endl; 
//	}
//};
//
//void Function()
//{
//	Timer timer;
//
//
//	for (int i = 0; i < 100; i++)
//	{
//		std::cout << "hello\n"; 
//	}
//}
//
//int main()
//{
//	Function(); 
//
//
//	std::cin.get();
//
//}
//
//










//#include <iostream>
//#include <thread> 
//#include <chrono>
//
//int main()
//{
//	int* array = new int[50];
//	int** a2d = new int* [50];
//	for (int i = 0; i < 50; i++)
//	{
//		a2d[i] = new int[50];
//	}
//
//	for (int i = 0; i < 50; i++)
//	{
//		delete[] a2d[i];
//	}
//
//	delete[] a2d;
//
//
//
//
//	array[0] = 0;
//	a2d[0] = nullptr;
//
//
//
//	delete[] array;
//
//	std::cin.get();
//
//}













#include <iostream>
//#include <thread> 
//#include <chrono>
//#include <vector>
//#include <array>
//#include <algorithm>
//
//
//
//int main()
//{
//	
//	std::vector<int> values = { 3, 2, 5, 1, 7 }; 
//	std::sort(values.begin(), values.end(), [](int a, int b)
//	{
//			return a > b; 
//	});
//	for (int i = 0; i < values.size(); i++)
//	{
//		std::cout << values[i] << std::endl;
//	}
//	std::cin.get();
//
//}





//struct Entity
//{
//	int x, y; 
//};
//
//
//int main()
//{
//	Entity e = { 5, 8 }; 
//
//	int* position = (int*)&e; 
//
//	//int y = *(int*)((char*)&e + 4); 
//	int y = e.y; 
//	std::cout << y << std::endl; 
//
//	std::cin.get();
//
//}







//#include <iostream>
//#include <thread> 
//#include <chrono>
//#include <vector>
//#include <array>
//#include <algorithm>
//
//class Entity
//{
//public:
//	virtual void PrintName() {}
//};
//
//class Player : public Entity
//{
//};
//
//class Enemy : public Entity
//{
//
//};
//
//int main()
//{
//
//	Player* player = new Player();
//	Entity* actuallyPlayer = player;
//	Entity* actuallyEnemy = new Enemy();
//	Player* p0 = dynamic_cast<Player*>(actuallyEnemy);
//	Player* p1 = dynamic_cast<Player*>(actuallyPlayer);
//	if (p0)
//	{
//
//	}
//
//	std::cin.get();
//}







//#include <iostream>
//#include <thread> 
//#include <chrono>
//#include <vector>
//#include <array>
//#include <algorithm>
//
//class Timer
//{
//public: 
//	Timer()
//	{
//		std::chrono::high_resolution_clock::now();
//	}
//
//	~Timer()
//	{
//		Stop(); 
//	}
//	void Stop()
//	{
//		auto endTimepoint = std::chrono::high_resolution_clock::now();
//		
//		auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTimepoint).time_since_epoch().count(); 
//		auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimepoint).time_since_epoch().count();
//
//		auto duration = end - start; 
//		double ms = duration * 0.001; 
//
//		std::cout << duration << "us (" << ms << "ms)\n"; 
//	}
//private: 
//	std::chrono::time_point< std::chrono::high_resolution_clock> m_StartTimepoint; 
//};
//
//int main()
//{
//	int value = 0;
//	struct Vector2
//	{
//		float x, y; 
//	};
//
//	{
//		Timer timer; 
//		for (int i = 0; i < 1000000; i++)
//			value += 2;
//
//	}
//
//	std::cout << "make shared \n" << std::endl; 
//	{
//		std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs;
//		Timer timer; 
//		for (int i = 0; i < sharedPtrs.size(); i++)
//			sharedPtrs[i] = std::make_shared<Vector2>();
//	}
//
//	std::cout << "new shared \n" << std::endl;
//	{
//		std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs;
//		Timer timer;
//		for (int i = 0; i < sharedPtrs.size(); i++)
//			sharedPtrs[i] = std::shared_ptr<Vector2>();
//	}
//	
//	std::cout << "make unique \n" << std::endl;
//	{
//		std::array<std::unique_ptr<Vector2>, 1000> sharedPtrs;
//		Timer timer;
//		for (int i = 0; i < sharedPtrs.size(); i++)
//			sharedPtrs[i] = std::make_unique<Vector2>();
//	}
//	
//
//	std::cout << value << std::endl; 
//
//
//	__debugbreak(); 
//	//std::cin.get();
//}





#include <iostream>
//#include <thread> 
//#include <chrono>
//#include <vector>
//#include <array>
//#include <algorithm>
//#include <tuple> 
//#include <string>
//
////struct Person
////{
////	std::string Name; 
////	int Age; 
////};
//
//std::tuple<std::string, int> CreatePerson()
//{
//	return { "test", 24 }; 
//}
//
//int main()
//{
//	/*auto person = CreatePerson(); 
//	std::string& name = std::get<0>(person); 
//	int age = std::get<1>(person); 
//
//
//	std::string name; 
//	int age; 
//	std::tie(name, age) = CreatePerson(); */
//
//	auto [name, age] = CreatePerson(); 
//	std::cout << name << std::endl; 
//
//	std::cin.get();
//}
//
//







//#include <iostream>
//#include <thread> 
//#include <chrono>
//#include <vector>
//#include <array>
//#include <algorithm>
//#include <tuple> 
//#include <string>
//#include <fstream>
//
//
//std::string ReadFileAsString(const std::string& filepath, bool& outSuccess)
//{
//	std::ifstream stream(filepath);
//	if (stream)
//	{
//		std::string result;
//		// read file 
//		stream.close();
//		return result;
//	}
//	outSuccess = false;
//	return std::string();
//}
//
//int main()
//{
//	bool fileOpenedSccessfully;
//	std::string data = ReadFileAsString("data.txt", fileOpenedSccessfully);
//	if (fileOpenedSccessfully)
//	{
//
//	}
//
//	std::cin.get();
//}
//
//





#include <iostream>
//#include <thread> 
//#include <chrono>
//#include <vector>
//#include <array>
//#include <algorithm>
//#include <tuple> 
//#include <string>
//#include <fstream>
//#include <optional>
//
//std::optional<std::string> ReadFileAsString(const std::string& filepath)
//{
//	std::ifstream stream(filepath); 
//	if (stream)
//	{
//		std::string result;
//		// read file 
//		stream.close(); 
//		return result; 
//	}
//	
//
//	return {}; 
//}
//
//int main()
//{
//	std::optional<std::string> data = ReadFileAsString("data.txt"); 
//	
//	std::string value = data.value_or("Not present"); 
//	std::cout << value << std::endl; 
//
//	std::optional<int> count; 
//	int c = count.value_or(100); 
//
//	if (data.has_value())
//	{
//		std::cout << "File read successfully!\n"; 
//	}
//	else
//	{
//		//std::string& strig = *data; 
//		//data.value(); 
//		std::cout << "File could not be opened\n"; 
//	}
//
//	std::cin.get();
//}
//
//






//#include <iostream>
//#include <thread> 
//#include <chrono>
//#include <vector>
//#include <array>
//#include <algorithm>
//#include <tuple> 
//#include <string>
//#include <fstream>
//#include <optional>
//#include <variant>
//
//enum class ErrorCode
//{
//	None = 0, NotFound = 1, NoAccess = 2
//};
//
//std::variant<std::string, int> ReadFileAsString()
//{
//	return {}; 
//}
//
//
//int main()
//{
//	std::variant<std::string, int>  data; 
//
//	std::cout << sizeof(int) << "\n";
//	std::cout << sizeof(std::string) << "\n";
//	std::cout << sizeof(data) << "\n";
//
//
//	data = "test"; 
//	std::cout << std::get<std::string>(data) << "\n"; 
//	data = 2; 
// 
//	if (auto value = std::get_if<std::string>(&data)); 
//	{
//		std::string& v = *value; 
//	}
//	else
//	{
//
//	}
//
//	std::cout << std::get<std::string>(data) << "\n";
//	std::cout << std::get<int>(data) << "\n";
//
//
//	std::cin.get();
//}
//
//





//#include <iostream>
//#include <thread> 
//#include <chrono>
//#include <vector>
//#include <array>
//#include <algorithm>
//#include <tuple> 
//#include <string>
//#include <fstream>
//#include <optional>
//#include <variant>
//#include <any> 
//
//void* operator new(size_t size)
//{
//	return malloc(size); 
//}
//
//
//struct CustomClass
//{
//	std::string s0 = "0"; 
//	std::string s1 = "1"; 
//};
//
//int main()
//{
//	std::any data; 
//	data = 2; 
//	data = "test"; 
//	data = std::string("test"); 
//
//	std::string&(std::any_cast<std::string&>(data)); 
//
//
//	//std::variant<std::string, int, const char*[]> data;
//	//data = 2;
//	//data = "test";
//	//data = std::string("test");
//
//	//std::string string = std::get<std::string>(data);
//	
//	std::cin.get();
//}
//
//








//#include <iostream>
//#include <thread> 
//#include <chrono>
//#include <vector>
//#include <array>
//#include <algorithm>
//#include <tuple> 
//#include <string>
//#include <fstream>
//#include <optional>
//#include <variant>
//#include <any> 
//
//static uint32_t s_AllocCount = 0; 
//
//void* operator new(size_t size)
//{
//	s_AllocCount++; 
//	std::cout << "Allocating " << size << " bytes\n"; 
//	return malloc(size); 
//}
//
//void Printname(const std::string& name)
//{
//	std::cout << name << std::endl; 
//	Printname(name); 
//
//	std::cout << s_AllocCount << " allocations" << std::endl; 
//}
//
//int main()
//{
//	std::string name = "test verify"; 
//
//#if 0 
//	std::string firstname = name.substr(0, 4); 
//	std::string firstname = name.substr(4, 11);
//#else
//	std::string_view firstname(name.c_str(), 4); 
//	std::string_view firstname(name.c_str()+4, 11);
//#endif
//
//
//	const char* name = "test verify";
//
//	std::string_view firstname(name, 4);
//	std::string_view firstname(name + 4, 11);
//
//	std::cin.get();
//}
//
//









//#include <iostream>
//#include <thread> 
//#include <chrono>
//#include <vector>
//#include <array>
//#include <algorithm>
//#include <tuple> 
//#include <string>
//#include <fstream>
//#include <optional>
//#include <variant>
//#include <any> 
//
//
//class Singleton
//{
//public: 
//	Singleton(const Singleton&) = delete; 
//	static Singleton& Get()
//	{
//		return s_Instance; 
//	}
//
//	void Function() {}
//
//private: 
//	Singleton() {}
//
//	float m_Memeber = 0.0f; 
//	static Singleton s_Instance; 
//};
//
//Singleton Singleton::s_Instance; 
//
//int main()
//{
//	Singleton& instance = Singleton::Get(); 
//
//
//	std::cin.get();
//}
//
//





//#include <iostream>
//#include <thread> 
//#include <chrono>
//#include <vector>
//#include <array>
//#include <algorithm>
//#include <tuple> 
//#include <string>
//#include <fstream>
//#include <optional>
//#include <variant>
//#include <any> 
//
//
//class Random
//{
//public: 
//	Random(const Random&) = delete; 
//	static Random& Get()
//	{
//		static Random instance; 
//		return instance; 
//	}
//
//	static float Float() { return Get().IFloat(); }
//
//private: 
//	float IFloat() { return m_RandomGenerator; }
//	Random() {}
//
//	float m_RandomGenerator = 0.5f; 
//};
//
//
//namespace RandomClass {
//
//	static float s_RandomGenerator = 0.5f; 
//	static float Float() { return s_RandomGenerator;  }
//
//}
//
//int main()
//{
//	float number = Random::Float(); 
//
//	std::cout << number << std::endl; 
//	std::cin.get();
//}
//
//






//#include <iostream>
//#include <thread> 
//#include <chrono>
//#include <vector>
//#include <array>
//#include <algorithm>
//#include <tuple> 
//#include <string>
//#include <fstream>
//#include <optional>
//#include <variant>
//#include <any> 
//
//
//void* operator new(size_t size)
//{
//	std::cout << "Allocating " << size << " bytes\n"; 
//	return malloc(size); 
//}
//
//int main()
//{
//	std::string name = "test"; 
//
//	std::cin.get();
//}
//
//






//#include <iostream>
//#include <thread> 
//#include <chrono>
//#include <vector>
//#include <array>
//#include <algorithm>
//#include <tuple> 
//#include <string>
//#include <fstream>
//#include <optional>
//#include <variant>
//#include <any> 
//
////memory allocations 
//
//
//struct AllocationMetrics
//{
//	uint32_t TotalAllocated = 0; 
//	uint32_t TotalFreed = 0; 
//
//	uint32_t CurrentUsage() { return TotalAllocated - TotalFreed; } 
//
//};
//
//static AllocationMetrics s_AllocatedMetrics; 
//
//void* operator new(size_t size)
//{
//	s_AllocatedMetrics.TotalAllocated += size; 
//
//	return malloc(size); 
//}
//
//void operator delete(void* memory, size_t size)
//{
//	s_AllocatedMetrics.TotalFreed += size;
//
//
//	free(memory); 
//}
//
//struct Object
//{
//	int x, y, z; 
//};
//
//static void PrintMemoryUsage()
//{
//	std::cout << "Memory Usage: " << s_AllocatedMetrics.CurrentUsage() << " bytes\n"; 
//}
//
//int main()
//{
//	PrintMemoryUsage(); 
//	std::string string = "test"; 
//	PrintMemoryUsage();
//
//	Object* obj = new Object; 
//	
//	{
//		std::unique_ptr<Object> obj = std::make_unique<Object>();
//		PrintMemoryUsage(); 
//	}
//	PrintMemoryUsage();
//
//	
//	std::cin.get();
//}
//
//






