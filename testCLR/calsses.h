#pragma once
#include<iostream>
#include<vector>
#include <cliext/vector>
#include<string>
#include<map>
#include <cliext/map>
#include<set>
#include<cliext/set>
#include<list>
#include<math.h>
#include<cmath>
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;


/*		* base class *		*/

ref class base
{
protected :String ^ name;
public:
	base() {};
	virtual cliext::vector<String^> get(String ^ s) = 0;    //pure virtual function in abstract class
	~base() {};
};

/*************************************************************************************/
/*     * class "city" to get cities and areas _inheritance_ from class "base" *     */

ref class city:public base
{
	cliext::vector<String^> area;
public:
	city() {};
		
	cliext::vector<String^> get_areas(String ^ s)   //_over write_ to "get" function to get all areas in specific city
	{
		cliext::vector<String^> areas;       /* here we read data from file in vector */
		
		return areas;
	}

};
/***************************************************************************************************/
/*		* class "rest" to get restaurants in specific adress _inheritance_ from class "base" *	  */

ref class rest:public base
{
	String ^ area;
public:
	rest() {};
	cliext::vector<String^> get_rest (String ^ s)   //_over write_ to "get" function to get all restaurants in specific adress
	{
		cliext::vector<String^> restaurants;       /* here we read data from file in vector */

		return restaurants;
	}

};
/*************************************************/
/*		* class "item" carry item data *		*/

ref class item
{
public:
	String^ name, ^ rest_name;
	int quantity;
	float price;
	item() :quantity(0), price(0.0) {};
	~item() {};
};
/*********************************************************************************************/
/*		* class "rest_data" carry all data for item _inheritance_ from class "item" *		*/

ref class rest_data: public item
{
	String^ category;

public:
	rest_data() {};
	cliext::vector<rest_data^> get_items(String ^ cat,String^ rest) 
	{
		cliext::vector<rest_data^> all_items;		/* here we read data from file in vector */

		return all_items;
	};
	~rest_data() {};

};
/*************************************************/
/*		* class "order" carry order data *		*/

ref class order
{
public:      // data member for this class
	String^ user_name, ^ payment, ^ complaint, ^ date, ^ del_boy;
	int order_id, rate, order_time;
	double tot_price;
	cliext::vector<item^> items;   // vector carry all items in this order

	order() :tot_price(0.0), complaint(""), date(DateTime::Now.ToShortDateString()), payment("cash"),order_time(0) {};   //constructor
	void set(cliext::vector<item^> it) { this->items = it; }          // function take vector have all items users had buy to set it  items_vector 

	double price()                 // function to get total price to this order
	{
		for each (item^ var in items)
		{
			this->tot_price += (var->quantity*var->price);
		}
		return this->tot_price;
	}

	int time()  // function to get order time by  multiply (number of restaurants in order)*(10 min)
	{
		cliext::set<String^> restaurants;  // set to save all restaurants in this order

		for each (item^ var in items)  //  loop  to count number of retaurants in orderd 
		{
			restaurants.insert(var->rest_name);
		}

		this->order_time=10*restaurants.size();  // calculate time to this order (num_of_restaurats * 10 min)
				
		return this->order_time;  // return time for order
	}

	void save(char ch)
	{
		if (ch == 'a') {}   //save order in admins orders
		else if(ch=='u'){}   //save order in users orders
		// save order date and del_boy name to del_boy file 
	}
	~order() {};
};

/**************************************************/
/*		* class "user" carry user data *		 */

ref class user
{
protected:	String ^name, ^pass;
public:
	user() {};
	bool check_offer()     //function to check offer or voucher to this customer
	{
		//here read data from users_orders file and check users offers
		return false;
	}
	
	bool check_valid(String^ n,String^ p)     // function to check  email and password  are valid to user
	{
		name = n;  pass = p;

		//check valid login from users file here 


		return true;
	}

	cliext::vector<order^> get_orders()   //function to get all orders this user has ordered in past
	{
		cliext::vector<order^> orders;       /* here we read data from file in vector */

		return orders;
	}
	
	bool sign_up(String^ n, String^ p)     	// this function allow user to register to system and check user_name exist
	{
		// check here if user_name exist   return false
		return true;   //if user successfully added
	}

};
/*********************************************************************************/
/*		* class "admin" carry admin data _inheritance_ from class "item" *		*/

ref class admin:public user
{
public:
	admin() {};

	bool check_offer()     //function to check offer or voucher to this customer
	{
		//here read data from admins_orders file and check admin offers
		return false;
	}

	bool check_valid(String^ n, String^ p)   //_over write_ to this  function to check  email and password are valid to admin
	{
		name = n;  pass = p;
		//check valid login from admins file here 

		return true;
	}

	cliext::vector<user^> all_users()  // function to get all user's data in system
	{
		cliext::vector<user^> users;     // here read data from user's file 

		return users;
	}

	cliext::vector<order^> get_orders(String^ n)   //_over write_ to this  function to get all orders to specific users
	{
		cliext::vector<order^> orders;       /* here we read data from file in vector */

		return orders;
	}
	
	void del_user(String^ n)
	{
		//here read data from users file and delete specific user  and rewrite data in file 
	}

	bool add_user(String^ n,String^ p)  // this function return true if user_name not exist  else return false
	{
		// check here if user_name exist return false
		 
		return true;   //if user successfully added
	}

	bool add_admin(String^ n, String^ p)  // this function return true if admin_name not exist  else return false
	{
		// check here if admin_name exist
		return true;   //if admin successfully added
	}

	void del_admin(String^ n)
	{
		//here read data from admin file and delete specific admin  and rewrite data in file 
	}

	bool add_boy(String^ n)
	{
		// check here if del_name exist
		return true;   //if del_boy successfully added
	}

	void del_boy(String^ n)
	{
		//here read data from del_boy file and delete specific del_boy  and rewrite data in file 
	}
	~admin() {};
};

/*************************************************************/
/*		* class "del_boy" carrry delivery boy data *		*/
ref class del_boys
{
	String^ name;
	cliext::vector<String^> all;
public:
	del_boys() {};
	void get_all()
	{
		//here read all del_boy name from del_boy file  and save him in vector "all"
	}

	String^ get(String^ d)  // function to get free delivery boy 
	{
		get_all();
		int cnt = 0;  // count to calculate number of order del_boy has delivered to day 
		for each (Object^ var in all)
		{
			// here loop on the file to check if (date == d  && name==var->ToString()) cnt++;

			if (cnt < 2)return var->ToString();
		}

	}


	~del_boys() {};
};
