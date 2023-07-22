#include "file_all_functions.h"

bool FileAllFunctions::Check_file_empty(string filename)
{
    ifstream file(filename, ios::binary);

    if (!file) {
        cerr << "Failed to open the file." << endl;
        return false;
    }

    file.seekg(0, ios::end);
    streampos fileSize = file.tellg();

    if (fileSize == 0) {
        cout << "The file is empty." << endl;
        return true;
    }

    return false;
}

template<typename T>
bool FileAllFunctions::save_element(T items,string filename)
{
	file.open(filename, ios::out | ios::binary);
	if (!file.is_open())
	{
		cout << "Error opening file!" << endl;
		return false;
	}
	file.write((char*)&items, sizeof(T));
	file.close();
	return true;
}

template<typename T>
bool FileAllFunctions::load_element(T& items, string filename)
{
	file.open(filename, ios::in | ios::binary);
	if (!file.is_open())
	{
		cout << "Error opening file!" << endl;
		return false;
	}
	file.read((char*)&items, sizeof(T));
	file.close();
	return true;
}

template<typename T>
bool FileAllFunctions::save_elements(vector<T> items, int count, string filename)
{
	file.open(filename, ios::out | ios::binary);
	if (file.is_open())
	{
		file.write((char*)&count, sizeof(int));
		for (size_t i = 0; i < count; i++)
		{
			file.write((char*)&items[i], sizeof(T));
		}
		file.close();
		cout << "Person was saved..." << endl;
		return true;
	}
	else
	{
		cout << "Error opening file!" << endl;
		return false;
	}
}

template<typename T>
bool FileAllFunctions::load_elements(vector<T> items, int& count, string filename)
{
	file.open(filename, ios::in | ios::binary);
	file.read((char*)&count, sizeof(int));
	items.resize(count);
	if (file.is_open())
	{
		for (size_t i = 0; i < count; i++)
		{
			file.read((char*)&items[i], sizeof(T));
		}
		file.close();
		return true;
	}
	else
	{
		cout << "Error opening file!" << endl;
		return false;
	}
}