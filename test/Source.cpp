#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;
struct Data
{
	string name;
	int grade;
	int id, nationalID;
	double ENG, MAth, Arabic;
	double total = ENG + MAth + Arabic;
};
struct Student
{
	Data student;
	Student* next;
};

class SchoolMangement
{
	Student* top, * cur;
public:

	SchoolMangement()
	{
		top = nullptr;
	}

	void Push(Student newstudent)
	{
		Student* save = new Student;
		if (isEmpty())
		{
			save->next = nullptr;
			save->student = newstudent.student;
			save->next = top;
			top = save;
		}
		else
		{
			save->student = newstudent.student;
			save->next = top;
			top = save;
		}
	}

	bool isEmpty()
	{
		return top == 0;
	}

	void LastStudent()
	{
		if (isEmpty())
			cout << "Sorry School is Empty!" << endl;
		else
			cout << "Last Student Added is: " << top->student.name << endl << endl;
	}

	void Pop()
	{
		if (isEmpty())
		{
			cout << "Kosmk EL Madrasa Fadya ya 5awl!!!!!!!!" << endl;
		}
		else
		{
			cur = top;
			top = top->next;
			cur = cur->next = 0;
			delete cur;
		}
	}

	void Print()
	{
		cout << "Students in School: " << endl << endl;
		cur = top;
		cout << endl << "===========================================" << endl;
		while (cur != 0)
		{
			cout << "Name of Student: " << cur->student.name << endl;
			cout << "Grade: " << cur->student.grade << endl;
			cout << "ID: " << cur->student.id << endl;
			cout << "National ID: " << cur->student.nationalID << endl;
			cout << "English Marks: " << cur->student.ENG << endl;
			cout << "Math Marks: " << cur->student.MAth << endl;
			cout << "Arabic Marks: " << cur->student.Arabic << endl;
			cout << "Total of Marks: " << cur->student.total << endl;
			cout << "===========================================" << endl;
			cur = cur->next;
		}
		cout << endl;
	}

	void Print(Student* student)
	{
		cout << endl << "===========================================" << endl;
		cout << "Name of Student: " << student->student.name << endl;
		cout << "Grade: " << student->student.grade << endl;
		cout << "ID: " << student->student.id << endl;
		cout << "National ID: " << student->student.nationalID << endl;
		cout << "English Marks: " << student->student.ENG << endl;
		cout << "Math Marks: " << student->student.MAth << endl;
		cout << "Arabic Marks: " << student->student.Arabic << endl;
		cout << "Total of Marks: " << student->student.total << endl;
		cout << "===========================================" << endl;
		cout << endl;
	}

	void Size()
	{
		int size = 0;
		cur = top;
		while (cur != 0)
		{
			size++;
			cur = cur->next;
		}
		cout << "Size of Students is: " << size << endl << endl;
	}

	void Swap(Student* temp, Student* temp2)
	{
		Data z = temp->student;
		temp->student = temp2->student;
		temp2->student = z;
	}

	void BubbleSort()
	{
		cout << "1) Sort by name || 2) Sort by id || 3) Sort by subjectmark || 4) Sort by totalmarks" << endl;
		string var = "";
		getline(cin, var);
		Student* ptr = top;
		Student* temp = top;
		Student* temp2 = top->next;
		Data z;
		if (var == "1")
		{
			cout << "1) Descending || 2) Ascending" << endl;
			string var2 = "";
			getline(cin, var2);
			if (var2 == "1")
			{
				while (ptr != nullptr)
				{
					while (temp2 != nullptr)
					{
						if (temp->student.name < temp2->student.name)
						{
							Swap(temp, temp2);
						}
						temp = temp->next;
						temp2 = temp2->next;
					}
					temp = top;
					temp2 = top->next;
					ptr = ptr->next;
				}
			}
			else if (var2 == "2")
			{
				while (ptr != 0)
				{
					while (temp2 != 0)
					{
						if (temp->student.name > temp2->student.name)
						{
							Swap(temp, temp2);
						}
						temp = temp->next;
						temp2 = temp2->next;
					}
					temp = top;
					temp2 = top->next;
					ptr = ptr->next;
				}
			}
			else
				cout << endl << "Choose and Write What you want Corecctly!" << endl << endl;
		}

		else if (var == "2")
		{
			cout << "1) Descending || 2) Ascending" << endl;
			string var2 = "";
			getline(cin, var2);
			if (var2 == "1")
			{
				while (ptr != 0)
				{
					while (temp2 != 0)
					{
						if (temp->student.id > temp2->student.id)
						{
							Swap(temp, temp2);
						}
						temp = temp->next;
						temp2 = temp2->next;
					}
					temp = top;
					temp2 = top->next;
					ptr = ptr->next;
				}
			}
			else if (var2 == "2")
			{
				while (ptr != 0)
				{
					while (temp2 != 0)
					{
						if (temp->student.id < temp2->student.id)
						{
							Swap(temp, temp2);
						}
						temp = temp->next;
						temp2 = temp2->next;
					}
					temp = top;
					temp2 = top->next;
					ptr = ptr->next;
				}
			}
			else
				cout << endl << "Choose and Write What you want Corecctly!" << endl << endl;
		}

		else if (var == "3")
		{
			cout << "Choose: 1) English || 2) Math || 3) Arabic" << endl;
			string var2 = "";
			getline(cin, var2);
			if (var2 == "1")
			{
				cout << " 1) Descending || 2) Ascending" << endl;
				string var3 = "";
				getline(cin,var3);
				if (var3 == "1")
				{
					while (ptr != 0)
					{
						while (temp2 != 0)
						{
							if (temp->student.ENG > temp2->student.ENG)
							{
								Swap(temp, temp2);
							}
							temp = temp->next;
							temp2 = temp2->next;
						}
						temp = top;
						temp2 = top->next;
						ptr = ptr->next;
					}
				}
				else if (var3 == "2")
				{
					while (ptr != 0)
					{
						while (temp2 != 0)
						{
							if (temp->student.ENG < temp2->student.ENG)
							{
								Swap(temp, temp2);
							}
							temp = temp->next;
							temp2 = temp2->next;
						}
						temp = top;
						temp2 = top->next;
						ptr = ptr->next;
					}
				}
				else
					cout << endl << "Choose and Write What you want Corecctly!" << endl << endl;
			}
			else if (var2 == "2")
			{
				cout << "1) Descending || 2) Ascending" << endl;
				string var3 = "";
				getline(cin, var3);
				if (var3 == "1")
				{
					while (ptr != 0)
					{
						while (temp2 != 0)
						{
							if (temp->student.MAth > temp2->student.MAth)
							{
								Swap(temp, temp2);
							}
							temp = temp->next;
							temp2 = temp2->next;
						}
						temp = top;
						temp2 = top->next;
						ptr = ptr->next;
					}
				}
				else if (var3 == "2")
				{
					while (ptr != 0)
					{
						while (temp2 != 0)
						{
							if (temp->student.MAth < temp2->student.MAth)
							{
								Swap(temp, temp2);
							}
							temp = temp->next;
							temp2 = temp2->next;
						}
						temp = top;
						temp2 = top->next;
						ptr = ptr->next;
					}
				}
				else
					cout << endl << "Choose and Write What you want Corecctly!" << endl << endl;
			}
			else if (var2 == "3")
			{
				cout << "1) Descending || 2) Ascending" << endl;
				string var3 = "";
				getline(cin, var3);
				if (var3 == "1")
				{
					while (ptr != 0)
					{
						while (temp2 != 0)
						{
							if (temp->student.Arabic > temp2->student.Arabic)
							{
								Swap(temp, temp2);
							}
							temp = temp->next;
							temp2 = temp2->next;
						}
						temp = top;
						temp2 = top->next;
						ptr = ptr->next;
					}
				}
				else if (var3 == "2")
				{
					while (ptr != 0)
					{
						while (temp2 != 0)
						{
							if (temp->student.Arabic < temp2->student.Arabic)
							{
								Swap(temp, temp2);
							}
							temp = temp->next;
							temp2 = temp2->next;
						}
						temp = top;
						temp2 = top->next;
						ptr = ptr->next;
					}
				}
				else
					cout << endl << "Choose and Write What you want Corecctly!" << endl << endl;
			}
			else
				cout << endl << "Choose and Write What you want Corecctly!" << endl << endl;
		}
		else if (var == "4")
		{
			cout << "1) Descending || 2) Ascending" << endl;
			string var3 = "";
			getline(cin, var3);
			if (var3 == "1")
			{
				while (ptr != 0)
				{
					while (temp2 != 0)
					{
						if (temp->student.total > temp2->student.total)
						{
							Swap(temp, temp2);
						}
						temp = temp->next;
						temp2 = temp2->next;
					}
					temp = top;
					temp2 = top->next;
					ptr = ptr->next;
				}
			}

			else if (var3 == "2")
			{
				while (ptr != 0)
				{
					while (temp2 != 0)
					{
						if (temp->student.total < temp2->student.total)
						{
							Swap(temp, temp2);
						}
						temp = temp->next;
						temp2 = temp2->next;
					}
					temp = top;
					temp2 = top->next;
					ptr = ptr->next;
				}
			}
			else
				cout << endl << "Choose and Write What you want Corecctly!" << endl << endl;
		}
		else
			cout << endl << "Choose and Write What you want Corecctly!" << endl << endl;
	}

	void LinerSearch()
	{
		cout << "1) Search by Name || 2) Search by ID || 3) Search by National ID " << endl;
		string str = "";
		getline(cin, str);
		bool found = false;
		if (str == "1")
		{
			if (isEmpty())
				cout << "School is Empty!!" << endl << endl;
			else
			{
				cout << "Enter the name of student: ";
				string name = "";
				getline(cin, name);
				cur = top;
				while (cur != nullptr)
				{
					if (name == cur->student.name && name.length()==cur->student.name.length())
					{
						Print(cur);
						found = true;
					}
					else if(name.length()<2)
					{
						for (size_t i = 0; i < name.length(); i++)
						{
							if(name[i] == cur->student.name[i])
							{
								Print(cur);
								found = true;
								break;
							}
						}
					}
					else if (name.length() < cur->student.name.length())
					{
						if (name.length() > 4) 
						{
							for (int i = name.length() - 2; i > name.length()-3; i--)
							{
								if (name[i] == cur->student.name[i])
								{
									Print(cur);
									found = true;
									break;
								}
							}
						}
						else
						{
							for (int i = name.length() - 1; i > name.length() - 2; i--)
							{
								if (name[i] == cur->student.name[i])
								{
									Print(cur);
									found = true;
									break;
								}
							}
						}
					}
					cur = cur->next;
				}
				if (!found)
					cout << endl << "There is no student with this name!" << endl << endl;
			}
		}
		else if (str == "2")
		{
			if (isEmpty())
				cout << "School is Empty!!" << endl << endl;
			else
			{
				cout << "Enter the ID of student: ";
				int id = 0;
				cin >> id;
				cur = top;
				while (cur != nullptr)
				{
					if (id == cur->student.id)
					{
						Print(cur);
						found = true;
						break;
					}
					else
						cur = cur->next;
				}
				if (!found)
					cout << endl << "There is no student with this ID!" << endl << endl;
			}
		}
		else if (str == "3")
		{
			if (isEmpty())
				cout << "School is Empty!!" << endl << endl;
			else
			{
				cout << "Enter the National ID of student: ";
				int NationalID = 0;
				cin >> NationalID;
				cur = top;
				while (cur != nullptr)
				{
					if (NationalID == cur->student.nationalID)
					{
						Print(cur);
						found = true;
						break;
					}
					else
						cur = cur->next;
				}
				if (!found)
					cout << endl << "There is no student with this National ID!" << endl << endl;
			}
		}
		else
			cout << endl << "Choose and Write What you want Corecctly!" << endl << endl;
	}
};
void main()
{
	SchoolMangement school{};
	Student one{ "Abdelrahman Mahdy", 1 , 12 , 54545787 , 50.4 , 55.2 , 70.3 };
	Student two{ "Hassan Mohamed", 2 , 5 , 454732540 , 98 , 95 , 90 };
	Student three{ "Marawn Ahmed", 3 , 10 , 85487024 , 58 , 50 , 60 };
	Student fhour{ "Yousif Walid", 4 , 3 , 65637801 , 8 , 85 , 92 };
	Student five{ "Abdullah Shreif", 2 , 7 , 921130310 , 80 , 75 , 92 };
	Student six{ "Abdelrahman Mahdy", 1 , 15 , 74342745 , 55.4 , 60.1 , 99.3 };
	school.Push(one);
	school.Push(two);
	school.Push(three);
	school.Push(fhour);
	school.Push(five);
	school.Push(six);
	school.Print();
	school.LastStudent();
	school.BubbleSort();
	school.Print();
	school.LinerSearch();
}