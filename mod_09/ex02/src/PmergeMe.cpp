#include <string>
#include <ctime>
#include <cstdlib>

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(char *argv[])
{
	int			num;
	unsigned	final_num;
	clock_t		start;
	double		elapsed_time;
	char		**tmp;

	start = clock();
	tmp = argv;
	while (*argv)
	{
		for (size_t	i = 0; (*argv)[i]; i++)
		{
			if (!std::isdigit((*argv)[i]))
				throw BadInput();
		}
		num = std::atoi(*argv);
		if (num < 0)
			throw BadInput();
		final_num = static_cast<unsigned>(num);
		this->_number_deque.push_back(final_num);
		argv++;
	}

	std::cout << "(DEQUE) BEFORE => ";
	for (size_t i = 0; i < this->_number_deque.size(); i++)
		std::cout << this->_number_deque[i] << " ";
	std::cout << std::endl;

	elapsed_time  = static_cast<double>(clock() - start) / CLOCKS_PER_SEC;
	std::cout << "STD::DEQUE CONTAIER FILL ELAPSED TIME => " << elapsed_time << std::endl;
	start = clock();
	this->_merge_sort(this->_number_deque, 0, this->_number_deque.size() -1);
	elapsed_time  = static_cast<double>(clock() - start) / CLOCKS_PER_SEC;
	std::cout << "STD::DEQUE CONTAIER SORT ELAPSED TIME => " << elapsed_time << std::endl;
	std::cout << "(DEQUE) AFTER => ";
	for (size_t i = 0; i < this->_number_deque.size(); i++)
		std::cout << this->_number_deque[i] << " ";
	std::cout << std::endl;


	start = clock();
	argv = tmp;
	while (*argv)
	{
		for (size_t	i = 0; (*argv)[i]; i++)
		{
			if (!std::isdigit((*argv)[i]))
				throw BadInput();
		}
		num = std::atoi(*argv);
		if (num < 0)
			throw BadInput();
		final_num = static_cast<unsigned>(num);
		this->_number_vector.push_back(final_num);
		argv++;
	}

	std::cout << "(VECTOR) BEFORE => ";
	for (size_t i = 0; i < this->_number_vector.size(); i++)
		std::cout << this->_number_vector[i] << " ";
	std::cout << std::endl;

	elapsed_time  = static_cast<double>(clock() - start) / CLOCKS_PER_SEC;
	std::cout << "STD::VECTOR CONTAIER FILL ELAPSED TIME => " << elapsed_time << std::endl;
	start = clock();
	this->_merge_sort(this->_number_vector, 0, this->_number_vector.size() - 1);
	elapsed_time  = static_cast<double>(clock() - start) / CLOCKS_PER_SEC;
	std::cout << "STD::VECTOR CONTAIER SORT ELAPSED TIME => " << elapsed_time << std::endl;

	std::cout << "(VECOTR) AFTER => ";
	for (size_t i = 0; i < this->_number_vector.size(); i++)
		std::cout << this->_number_vector[i] << " ";
	std::cout << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& obj)
{
	*this = obj;
}

PmergeMe::~PmergeMe() {}

PmergeMe&	PmergeMe::operator= (const PmergeMe& obj)
{
	(void)obj;
	return (*this);
}

template<typename C>
void	PmergeMe::_merge_values(C &container, size_t low, size_t mid, size_t high)
{
	C	tmp;
	size_t	left = low;
	size_t	right = mid + 1;

	for (; left <= mid && right <= high; )
	{
		if (container[left] < container[right])
			tmp.push_back(container[left++]);
		else
			tmp.push_back(container[right++]);
	}
	for (; left <= mid && left < container.size();)
		tmp.push_back(container[left++]);

	for (; right <= high && right < container.size();)
		tmp.push_back(container[right++]);

	for (size_t i = 0; i < container.size() && i < tmp.size(); i++)
		container[low + i] = tmp[i];
}

template<typename C>
size_t	PmergeMe::_binary_search(C& container, unsigned key, size_t low, size_t high)
{
	size_t	mid;

	while (high - low > 1)
	{
		mid = low + (high - low) / 2;
		if (container[mid] <= key)
			low = mid;
		else
			high = mid;
	}

	if (key > container[low])
		return (high);
	return (low);
}

template<typename C>
void	PmergeMe::_binary_insertion_sort(C& container, size_t low, size_t high)
{
	unsigned	key;
	size_t		loc;

	for (size_t i = low + 1; i <= high && i < container.size(); i++)
	{
		key = container[i];

		loc = this->_binary_search(container, key, low, i);

		for (size_t j = i - 1; j >= loc && j < container.size(); j--)
			container[j + 1] = container[j];
		container[loc] = key;
	}
}

//TODO insert binary search
template<typename C>
void	PmergeMe::_merge_sort(C& container, size_t low, size_t high)
{
	size_t	mid;

	if (high - low + 1 < THRESHOLD)
		this->_binary_insertion_sort(container, low, high);
	else
	{
		mid = (low + high) / 2;
		this->_merge_sort(container, low, mid);
		this->_merge_sort(container, mid + 1, high);
		this->_merge_values(container, low, mid, high);
	}
}

std::ostream&	operator<<(std::ostream& os, PmergeMe::BadInput& err)
{
	os << err.what();
	return (os);
}

const char	*PmergeMe::BadInput::what() const throw ()
{
	return ("Error: bad argument format, check the input.\n");
}
