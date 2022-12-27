//////// класс multimap///////////////////

//template <class Key, class T, class Comp = less<key>,
//	class Allocator = Alloctor<pair<const key, T> >
//	class multimap

//	/**********************/
//	explicit multimap(const Comp &cmpfn =Comp(), Allocator &a = Allocator());
//
//multimap(multimap<Key, T, Comp, Allocator> &ob);
//
//template < class InIter> multimap(InIter start,InIter end, const Comp &cmpfn = Comp(),
//	const Allocator &a = Allocator());

/************************************/
 //   ■■ ==
 // 	■■ <=
	//■■ !=
	//■■ >
	//■■ >=

/***************************/
// 1 iterator begin();
//    const_iterator begin() const;

// 2 size_type count(const key_type &k) const;

// 3 bool empty() const;

// 4 const_iterator end() const;
//   iterator end();

// 5 pair<iterator, iterator> equal_range(const key_type &k);
//   pair<const_iterator, const_iterator> equal_range(const key_type &k) const

// 6 void erase(iterator start, iterator end);

// 7 size_type erase(const key_type &k);

// 8 pair<iterator, bool> insert(const value_type &val);

// 9 iterator lower_bound(const key_type &k);
//   const_iterator lower_bound(const key_type &k) const;

// 10 void swap(multimap<Key, T, Comp, Allocator> &ob);

// 11 iterator upper_bound(const key_type &k);
//    const_iterator upper_bound(const key_type &k) const;
/**************************************/
#include <iostream>
#include <map> 
#include <string>
using namespace std;
template<class container> void show(container col)
{
	for (auto i = col.begin(); i != col.end(); ++i)
	{
		cout << i->first << '\t' << i->second << endl;
	}
	cout << endl << endl;
}
void main()
{
	//cout << "map\n\n";
	//map<string, int> cont;
	//multimap<string, int> multicont;
	//cont.insert(pair<string, int>("Ivanov", 10));
	//cont.insert(pair<string, int>("Petrov", 20));
	//cont["Sidorov"] = 30; // если ключ не существует то добавляется, а если существует то значение переписывается
	//show(cont);
	//cont["Ivanov"] = 50;
	//show(cont);
	//cont.insert(pair<string, int>("Ivanov", 100));
	//show(cont);

	///////////////////////////////////////////////////

	//cout << "------------------------\nmultimap\n\n";
	//multicont.insert(pair<string, int>("Ivanov", 10));
	//multicont.insert(pair<string, int>("Petrov", 20));
	//multicont.insert(pair<string, int>("Sidorov", 20));

	////Для мульти отображения не определен оператор "[]"
	////multicont["Sidorov"] = 30; //Error
	//
	//show(multicont);
	//multicont.insert(pair<string, int>("Ivanov", 100));
	//show(multicont);
	//multimap<string, int>::iterator iter =multicont.find("Petrov");
	//cout << iter->first << '\t' << iter->second<< endl << endl;
	//cout << "Count of key \"Ivanov\" in multimap = "<< multicont.count("Ivanov") << endl;
	//iter = multicont.lower_bound("Ivanov");
	//for (; iter != multicont.upper_bound("Ivanov")&& iter != multicont.end(); iter++)
	//{
	//	cout << iter->first << '\t' << iter->second	<< endl;
	//}
	//cout << endl << endl;


	cout << "map\n\n";
	map<string, int> street;
	int n, people, key;
	string house;
	cout << "Entere houses number: " << endl;
	cin >> n;
	cout << "Enter house number and people: " << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << i << " house ";
		cin >> house;
		cin >> people;
		street.insert(make_pair(house, people));
	}

	cout << endl << endl;

	show(street);

	cout << endl << endl;

	map<string, int>::iterator iter = street.begin(); 

	cout << "Enter house number: ";
	
	if (street.count(house) {

	})
}