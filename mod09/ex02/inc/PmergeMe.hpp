#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <deque>
#include <vector>
#include <iostream>

# define THRESHOLD	10

class PmergeMe
{
	private:
		std::deque<unsigned>	_number_deque;
		std::vector<unsigned>	_number_vector;

		template<typename C>
		void	_binary_insertion_sort(C&, size_t, size_t);
		template<typename C>
		size_t	_binary_search(C&, unsigned, size_t, size_t);
		template<typename C>
		void	_merge_values(C&, size_t, size_t, size_t);
		template<typename C>
		void	_merge_sort(C&, size_t, size_t);


	protected:

	public:

		PmergeMe();
		PmergeMe(char *argv[]);
		PmergeMe(const PmergeMe&);
		~PmergeMe();

		PmergeMe&	operator=(const PmergeMe&);

		class BadInput : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

};

std::ostream&	operator<<(std::ostream&, PmergeMe::BadInput&);

#endif //PMERGEME_HPP
