#pragma once
#pragma once
#include <memory>

namespace utility {
    template <class T>
    class Singleton {
    private:
        friend class std::auto_ptr<T>;
        static std::auto_ptr<T> instance_;

    public:
        static T* GetInstance();
        static void FreeInstance();
    public:
        Singleton();
        virtual ~Singleton();
    };

    template<class T>
    std::auto_ptr<T> Singleton<T>::instance_;

    template<class T>
    inline T* Singleton<T>::GetInstance()
    {
        if (instance_.get() == NULL) {
            instance_.reset(new T());
        }
        return instance_.get();
    }

    template<class T>
    Singleton<T>::Singleton() {

    }

    template<class T>
    Singleton<T>::~Singleton() {

    }

}