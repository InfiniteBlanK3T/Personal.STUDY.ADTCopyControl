
// COS30008: Tutorial 9, 2023

#pragma once

#include <optional>
#include <cassert>

template<typename T>
class Stack
{
private:
    T* fElements;
    size_t fStackPointer;
    size_t fCurrentSize;

#ifdef P1
	    
    void resize( size_t aNewSize );
    void ensure_capacity();
    void adjust_capacity();

#endif
    
public:
    
#ifdef P1
	
    Stack(); :
    ~Stack();

#endif

#ifdef P3
	
    Stack( const Stack& aOther ); 
    
    Stack& operator=( const Stack<T>& aOther );

#endif

#ifdef P4

    Stack( Stack<T>&& aOther ) noexcept;
    
    Stack& operator=( Stack<T>&& aOther ) noexcept;

    void swap( Stack& aOther ) noexcept;

#endif
      
#ifdef P1
	  
    size_t size() const noexcept;
    
    std::optional<T> top() noexcept;

    void push( const T& aValue );

#endif
	
#ifdef P2
	
    template<typename... Args>
    void emplace(Args&&... args);

#endif

#ifdef P1
	
    void pop();
	
#endif
};
