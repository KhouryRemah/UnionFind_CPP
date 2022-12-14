#ifndef UNIONFIND_H
#define UNIONFIND_H


template <class Data>
class UnionFind {
	int* parent;
	int* rank;
	Data** data;
	int size;

public:
	UnionFind(int size);
	~UnionFind();
	int Find(int index);
	void Union(int index1, int index2);
};
template <class Data>
UnionFind<Data>::UnionFind(int size) :parent(new int[size]), rank(new int[size]), data(new Data* [size]), size(size) {
	for (int i = 0; i < size; i++) {
		parent[i] = i;
		data[i] = new Data(i);
		rank[i] = 1;
	}

}
template <class Data>
UnionFind<Data>::~UnionFind() {
	for (int i = 0; i < size; i++) {
		delete data[i];
	}
}
template <class Data>
int UnionFind<Data>::Find(int index) {
	if (index < 0 || index >= size)return -1;
	if (parent[index] == index)return index;
	parent[index] = Find(parent[index]);
	return parent[index];
}
template <class Data>
void UnionFind<Data>::Union(int index1, int index2) {
	if (index1 == index2)return;
	int root1 = Find(index1);
	int root2 = Find(index2);
	if (root1 == -1 || root2 == -1)return;
	if (root1 == root2)return;
	int size1 = rank[root1];
	int size2 = rank[root2];
	if (size1 >= size2) {
		parent[root2] = root1;
		rank[root1] += rank[root2];
	}
	else {
		parent[root1] = root2;
		rank[root2] += rank[root1];
	}
}



#endif //UNIONFIND_H