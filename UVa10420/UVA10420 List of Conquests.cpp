#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	int n;
	cin >> n;
	map<string, int> num;//��a�W�٬�����, int�ΨӲέp�Ӱ�H�� 
	//map<string, int> ::iterator iter;	
	//cin.ignore();//�h������Ÿ� 
	string others;//�x�s�᭱���H�W 
	while (n--)
	{
		string country;//�x�s�C�C����a�W�� 
		cin >> country >> others >> others; //Ū�J��a�W�r
		//getline(cin, others);//Ū�J�H�W	
		num[country]++; //��Jmap��key�û��W��۹蠟value
	}
	/*for (iter = num.begin(); iter != num.end(); iter++)
		// map�w�]�|�۰ʨ̾گ��ަr�������ǱƧ� 
	{
		cout << iter->first << " "; //���o��W
		cout << iter->second << endl; //���o�H��
	}*/
	for (const auto i : num) {
		cout << i.first << " " << i.second << endl;
	}
	return 0;
}
/*
#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	int n;
	cin >> n;
	map <string, int> mp;
	string temp;
	while (n--) {
		string contry;
		cin >> contry >> temp >> temp;
		mp[contry]++;
	}
	for (auto i : mp)
		cout << i.first << ' ' << i.second << endl;
return 0;
}
*/