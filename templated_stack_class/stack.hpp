#include <vector>
#include <iostream>

template<typename T>
class MyStack
{
    public:
        void push(T n)
        {
            storage.push_back(n);
        }

        T pop()
        {
            T tmp{};
            T *ptr = &tmp;
            storage.pop_back();
            return *ptr;
        }

        void displayStorage()
        {
            std::cout << "Storage contains: " << std::endl;
            for (T i : storage)
            {
                std::cout << i << std::endl;
            }
        }

    private:
        std::vector<T> storage{};

};