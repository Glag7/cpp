/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon           <skibidi@ohio.sus>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1833/02/30 06:67:85 by glaguyon          #+#    #+#             */
/*   Updated: 1833/02/30 06:67:85 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array() : _array(new T[0]), _size(0)
{
	std::cout << "empty array created\n";
}

template <typename T>
Array<T>::Array(size_t size) : _array(new T[size]), _size(size)
{
	for (size_t i = 0; i < _size; ++i)
		_array[i] = T();
	std::cout << "array of size " << _size << " created\n";
}

template <typename T>
Array<T>::Array(const Array &a) : _array(new T[a._size]), _size(a._size)
{
	for (size_t i = 0; i < _size; ++i)
		_array[i] = a._array[i];
	std::cout << "array copy\n";
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &a)
{
	if (this == &a)
		return *this;
	delete[] _array;
	_size = a._size;
	_array = new T[_size];
	for (size_t i = 0; i < _size; ++i)
		_array[i] = a._array[i];
	std::cout << "array =\n";
	return *this;
}

template <typename T>
T	&Array<T>::operator[](size_t i)
{
	if (i >= _size)
		throw std::out_of_range("Array index out of range");
	return _array[i];
}

template <typename T>
const T	&Array<T>::operator[](size_t i) const
{
	if (i >= _size)
		throw std::out_of_range("Array index out of range");
	return _array[i];
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
	std::cout << "bye array\n";
}

template <typename T>
size_t	Array<T>::size() const
{
	return _size;
}

#endif
