#define LLVM_SMALL_VECTOR_IMPLEMENTATION
#include "SmallVector.hpp"
#include <cstdio>

static void fill(llvm::SmallVectorImpl<size_t> &v)
{
	for (size_t i = 0; i < 16; i++)
		v.push_back(i);
}

static void print(llvm::SmallVectorImpl<size_t> &v)
{
	for (auto i : v)
		printf("%zu ", i);
	printf("\n");
}

int main(int argc, char **argv)
{
	llvm::SmallVector<size_t, 16> vec0;
	llvm::SmallVector<size_t, 32> vec1;
	fill(vec0);
	fill(vec1);
	print(vec0);
	print(vec1);
	return 0;
}
