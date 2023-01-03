#include<bits/stdc++.h>

using namespace std;

/*
6. Write a class named ‘Cuboid’.
Create 3 private variables in the class. length, width and height.
Create 2 constructor. One is an empty constructor that takes nothing as input and initializes length, width and height as 0. Another constructor takes 3 values as input and initializes length, width and height as the given values.
Write a public function named ‘getVolume’ that calculates the volume of the Cuboid and returns the desired Volume.
Write a public function named ‘getSurfaceArea’ that calculates the surface area of the Cuboid and returns the desired value.
Create an array of ‘Cuboid’ objects(like 4 or 5 objects) and initialize length, width and height with any value you like. But make sure to give different length, width, height to different objects.
Sort the ‘Cuboid’ objects in the increasing order of Volume by writing a custom comparator.
Sort the ‘Cuboid’ objects in the increasing order of surface area by writing a custom comparator.

	Note: Volume = l*w*h
	          Surface Area = 2*l*w+2*l*h+2*h*w
	          l = length, w = width , h = height


*/

class Cuboid{
private:
    int length;
    int weight;
    int height;
public:
    Cuboid()
    {
        length = 0;
        weight = 0;
        height = 0;
    }

    Cuboid(int l, int w, int h)
    {
        length = l;
        weight = w;
        height = h;
    }

    int getVolume()
    {
        return length * weight * height;
    }
    int getSurfaceArea()
    {
        int total = length * weight + length * height + weight * height;
        return 2 * total;
    }

};

bool comp(Cuboid x, Cuboid y)
{
    return x.getVolume() < y.getVolume();
}
bool comp1(Cuboid x, Cuboid y)
{
    return x.getSurfaceArea() < y.getSurfaceArea();
}

int main()
{
    vector<Cuboid>s;

    for(int i=0; i<4; i++)
    {
        int x, y, z;
        cin>>x>>y>>z;
        s.push_back(Cuboid(x,y,z));
    }

    for(int i =0; i<4; i++)
    {
        cout<<s[i].getVolume()<<"\n";
    }

    sort(s.begin(), s.end(), comp1);

    cout<<"after sorting:"<<"\n";
        for(int i =0; i<4; i++)
    {
        cout<<s[i].getVolume()<<"\n";
    }
//    cout<<s.getVolume()<<"\n";
//    cout<<s.getSurfaceArea();



    return 0;
}

//5. WAP that takes 2 integer arrays as input, then computes the union of the two arrays.

//int main()
//{
//    int x, y;
//
//    cin>>x;
//    vector<int>arr1(x);
//    for(int i =0; i<x; i++)
//    {
//        cin>>arr1[i];
//    }
//    cin>>y;
//    vector<int>arr2(y);
//
//    for(int i =0; i<y; i++)
//    {
//        cin>>arr2[i];
//    }
//
//    int i =0, j =0;
//
//    while(i<x && j <y)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            cout << arr1[i++] << " ";
////            cout <<"i="<< i << " ";
//
//        }
//
//        else if (arr2[j] < arr1[i])
//        {
//            cout << arr2[j++] << " ";
////              cout << "j="<<j << " ";
//        }
//
//        else
//        {
//            cout << arr2[j++] << " ";
//            i++;
//        }
//    }
//
//    while (i < x)
//        cout << arr1[i++] << " ";
//
//    while (j < y)
//        cout << arr2[j++] << " ";
//
//    return 0;
//}


// 4. WAP that takes 2 integer arrays as input, then computes the intersection of the two arrays.

//int main()
//{
//    int x, y;
//
//    cin>>x;
//    vector<int>arr1(x);
//    for(int i =0; i<x; i++)
//    {
//        cin>>arr1[i];
//    }
//    cin>>y;
//    vector<int>arr2(y);
//
//    for(int i =0; i<y; i++)
//    {
//        cin>>arr2[i];
//    }
//
//
//    for(int i =0; i<x; i++)
//    {
//        for(int j = 0; j<y; j++)
//        {
//            if(arr1[i] == arr2[j])
//            {
//                cout<<arr2[j]<<" ";
//            }
//        }
//    }
//
//
//    return 0;
//}

// 3. WAP that takes a string as input, and shifts all the characters in the even indexed position by the following rule.
//‘a’ becomes ‘b’
//‘b’ becomes  ‘c’
//…
//‘z’ becomes  ‘a’


//int main()
//{
//    string str;
//    cin>>str;
//
//    for(int i =0; i<str.size(); i++)
//    {
//        if(str[i] >= 'a' && str[i] < 'z' && str[i] % 2 != 0)
//        {
//            str[i] += 1;
//
//        }
//        else if(str[i] == 'z')
//        {
//            str[i] -= 25vf]\0
//        }
//        cout<<str[i];
//    }
//    return 0;
//}


//int main()
//{
//    string str;
//    cin>>str;
//
//    for(int i =0; i<str.size(); i++)
//    {
//        if(str[i] >= 'a' && str[i] < 'z')
//        {
//            str[i] += 1;
//
//        }
//        else if(str[i] == 'z')
//        {
//            str[i] -= 25;
//        }
//        cout<<str[i];
//    }
//    return 0;
//}

//2. WAP that takes n integer numbers, and multiply all the numbers in the odd indexed position. Indexing starts from 0.

//int main()
//{
//    int n;
//
//    cin>>n;
//
//    vector<int>arr(n);
//
//    int multi = 1;
//
//    for(int i = 0; i<n; i++)
//    {
//        cin>>arr[i];
//        if(i % 2 != 0 && i != 0)
//        {
//            multi *= arr[i];
//
//        }
//    }
//
//    cout<<multi<<"\n";
//    return 0;
//}



// 1. WAP that takes n integer numbers, and sum up all the integers in that array.

//int main()
//{
//    int n;
//
//    cin>>n;
//
//    vector<int>arr(n);
//
//    int sum;
//
//    for(int i=0; i<n; i++)
//    {
//        cin>>arr[i];
//        sum += arr[i];
//    }
//
//    cout<<sum<<"\n";
//    return 0;
//}
