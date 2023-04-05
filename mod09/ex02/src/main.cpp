#include "utils.hpp"

template<typename T>
void	print_container(T container) {
	for (typename T::iterator i = container.begin(); i != container.end(); i++) {
		std::cout << *i << " - ";
	}
	std::cout << std::endl;
}

bool	is_preliminary_ok(int ac, char **av) {
	if (ac == 1) {
		std::cout << "Error! 1" << std::endl;
		return false;
	}
	if (!is_valid_input(av)) {
		std::cout << "Error! 2" << std::endl;
		return false;
	}
	return true;
}

void merge(std::vector<int>& vec, int left, int middle, int right) {
    std::vector<int> temp(right - left + 1);

    int i = left;
	int j = middle + 1;
    int k = 0;

    while (i <= middle && j <= right) {
        if (vec[i] < vec[j]) {
            temp[k++] = vec[i++];
        } else {
            temp[k++] = vec[j++];
        }
    }
    while (i <= middle) {
        temp[k] = vec[i];
		i++;
		k++;
    }
    while (j <= right) {
        temp[k] = vec[j];
		j++;
		k++;
    }
    for (i = left; i <= right; ++i) {
        vec[i] = temp[i - left];
    }
}

void merge_sort(std::vector<int>& vec, int left, int right) {
    if (left < right) {
        int middle = (left + right) / 2;
        merge_sort(vec, left, middle);
        merge_sort(vec, middle + 1, right);
        merge(vec, left, middle, right);
    }
}

int main(int ac, char **av) {
	if (!is_preliminary_ok(ac, av)) {
		return 1;
	}
	std::vector<int>	container_1;

	unsigned	pos = 1;
	while (av[pos]) {
		container_1.push_back(str_to_int(av[pos]));
		pos++;
	}
	std::cout << "cont size: " << container_1.size() << std::endl;
	merge_sort(container_1, 0, container_1.size() - 1);
	print_container(container_1);

	print_result();
	return 0;
}
