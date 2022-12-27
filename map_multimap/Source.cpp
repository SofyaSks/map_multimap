////// класс MAP /////////////
//template <class Key, class T, class Comp = less<key>, class Allocator = Allocator<pair<const key, T>>>
//    class map
//    /****************************/
//    explicit map(const Comp &cmpfn = Comp(),Allocator &a = Allocator());
//
// map(map <Key, T, Comp, Allocator> &ob);
//
//template < class InIter> 
//map(InIter start,InIter end, const Comp &cmpfn = Comp(),const Allocator &a = Allocator()); 
//
///*******************************/
//    ■■ ==
//    ■■ <
//    ■■ <=
//    ■■ !=
//    ■■ >
//    ■■ >=

        /*****************************/

    // 1 iterator begin();
    // const_iterator begin() const;

    // 2 void clear();

    // 3 size_type count(const key_type &k) const;



    // 5 const_iterator end() const;
    //   iterator end();

    // 6 pair<iterator, iterator> equal_range(const key_type &k);
    //   pair<const_iterator, const_iterator> equal_range(const key_type &k) const;

    // 7 void erase(iterator start, iterator end);

    // 8 pair<iterator, bool> insert(const value_type &val);

    // 9 reference operator[](const key_type &i);

    // 10 size_type size() const;

    // 11 void swap(map<Key, T, Comp, Allocator> &ob);

        /******************************/
        //Пример: данный пример демонстрирует методы
        //работы со отображениями
//#include <iostream>
//#include <map>
//#include <vector>
//using namespace std;
//void main()
//{
//    map <int, string> our_map;
//    /*vector <int> our_vector;
//    cout << "\n\nmax size of vector --> "
//        << our_vector.max_size() / sizeof(int);
//    cout << "\n\nmax size of map --> "
//        << our_map.max_size() / sizeof(int);
//    cout << "\n\n-------------------------------\n";*/
//    string val;
//    int key;
//
//    for (int i = 0; i < 5; i++)
//    {
//     cout << "\nInput value : ";
//     cin >> val;
//     cout << "\nInput key : ";
//     cin >> key;
//     pair<int, string> element(key, val);
//     our_map.insert(element);
//    }
//    
//
//    /*cout << "\nCurrent element of map --> "
//        << our_map.size() << endl;*/
//    /*cout << "\n\n-------------------------------\n";
//    cout << "\nInput value : ";
//    cin >> val;
//    cout << "\nInput key : ";
//    cin >> key;*/
//
//
//    /*pair<map<int, string>::iterator, bool>
//        err = our_map.insert(make_pair(key, val));
//    if (err.second == false)
//    {
//        cout << "\nError !!!\n";
//    }
//    cout << "\nCurrent element of map --> "
//        << our_map.size() << endl;*/
//
//    map<int, string>::iterator iter = our_map.begin();
//    for (; iter != our_map.end(); iter++)
//    {
//        cout << "\nKey --> " << iter->first
//            << "\t\tValue --> " << iter->second;
//    }
//    cout << "\n---------------------------------\n";
//
//    // Var 1
//    //iter = our_map.begin();
//    //iter = our_map.find(3);
//    //our_map.erase(iter);
//
//    // Var 2
//    iter = our_map.begin();
//    for (; iter != our_map.end(); iter++)
//    {
//        if (iter->first == 3) {
//            iter = our_map.erase(iter);
//        }
//
//    }
//
//    iter = our_map.begin();
//    for (; iter != our_map.end(); iter++)
//    {
//        cout << "\nKey --> " << iter->first
//            << "\t\tValue --> " << iter->second;
//    }
//    cout << "\n---------------------------------\n"; 

    
   /* cout << "Inter key to delete value: ";
    int el;
    cin >> el;
    for (; iter != our_map.end(); iter++)
    {
        if (iter->first == el) {
            our_map.erase(iter);
            break;
        }
       
    }

    cout << "\n---------------------------------\n";
    

    for (; iter != our_map.end(); iter++)
    {
        cout << "\nKey --> " << iter->first
            << "\t\tValue --> " << iter->second;
    }
    cout << "\n---------------------------------\n";

}*/
