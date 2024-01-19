#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

//string numberOffloors, number_of_rooms_in_floor_1, room_number_1, number_beds_1, bed_price_1;
//string number_of_rooms_in_floor_2, room_number_2, number_beds_2, bed_price_2;
//string  room_number_c, number_seates_c, seat_price;
//string numberOffloors2, number_of_rooms_in_floor_3, room_number_3, number_beds_3, bed_price_3;
//string numberOffloors3, number_of_rooms_in_floor_4, room_number_4, number_beds_4, bed_price_4;
//string room_number_s, price_s;
//string room_number_s2, price_s2;

double x[15];

class room{
protected:

	int room_num;
	int days_of_reservation;
	bool is_reseved;

public:

	room()
	{
		room_num = 0;
		days_of_reservation = 0;
	}

	room(int _roomnum, int _daysofreservation)
	{
		room_num = _roomnum;
		days_of_reservation = _daysofreservation;
		is_reseved = false;
	}

	void set_room_num(int _roomnum)
	{
		room_num = _roomnum;
	}

	int get_room_num()
	{
		return room_num;
	}

	void set_days_of_reservation(int _daysofreservation)
	{
		days_of_reservation = _daysofreservation;
	}

	int get_days_of_reservation()
	{
		return days_of_reservation;
	}

	void set_is_reseved(bool _isreseved)
	{
		is_reseved = _isreseved;
	}

	int get_is_reseved()
	{
		return is_reseved;
	}

	bool is_reseved_or_not( int nu )
	{
			
		if (get_is_reseved() == false)
		{
			return false;
		}

		else
		{
			return true;
		}

	}

	void reserve_room(int rooonum)
	{
	
		//if (is_reseved_or_not(rooonum) == false)
		//{
			cout << endl << endl;
			cout << "                                         ....................   " << endl;
			cout << "                                         .     : DONE :     . " << endl;
			cout << "                                         . ROOM IS RESEVED  ." << endl;
			cout << "                                         ....................   " << endl;
			set_is_reseved(true);
		//}
	}

	void canclee(int rooum)
	{

		//if (is_reseved_or_not(rooonum) == false)
		//{
		cout << endl << endl;
		cout << "                                         ............................   " << endl;
		cout << "                                         .         : DONE :         .   " << endl;
		cout << "                                         . RESERVATION IS CANCELED  .   " << endl;
		cout << "                                         ............................   " << endl << endl;
		set_is_reseved(false);
		//}
	}

	void check(int rooium)
	{
		//if (is_reseved_or_not(rooonum) == false)
		//{
		set_is_reseved(false);
		//}
	}

	virtual void available_room_details()
	{
			if (is_reseved == false)
			{
				cout << endl;
				cout << "                                                                    -------- " << endl;
				cout << "                                             ROOM NUMBER       ->   - " << room_num << "  -" << endl;
				cout << "                                                                    -------- ";
			}
			
	   cout << endl;
	}

	virtual void all_room_details()
	{
		
			cout << endl;
			cout << "                                                                    -------- " << endl;
			cout << "                                             ROOM NUMBER       ->   - " << room_num << "  -" << endl;
			cout << "                                                                    -------- " << endl;
			//cout << "                                                                           -------- " << endl;
			cout << endl;
			cout << "                                             DAYS RESERVATION  ->     -   " << days_of_reservation << "  - " << endl;
		   //cout << "                                                                           -------- ";
		    cout << endl;
	}

	virtual void one_room_details()
	{
		cout << endl;
		cout << "                                                                            -------- " << endl;
		cout << "                                       DAYS RESERVATION             :->     -   " << days_of_reservation << "  - " << endl;
		cout << "                                                                            -------- ";
	}

	virtual void price()
	{
		cout << endl;
		cout << "                                                                            *********** " << endl;
		cout << "                                      TOTAL PRICE                   :->     ";
	}

	virtual double pricee()
	{
		cout << endl;
		cout << "                                                                            *********** " << endl;
		cout << "                                             ROOM PROFIT   : " << room_num  << "   :->    ";
		return 0;
	}

	virtual double priceet()
	{
		return 0;
	}
};

class standardroom : public room{
private:

	int num_of_beds;
	double bed_price;

public:

	double price_of_res = 0;
	double total_price = 0;

	standardroom()
	{
		num_of_beds = 0;
		bed_price = 0;
	}

	standardroom(int _numofbeds, double _bedprice)
	{
		num_of_beds = _numofbeds;
		bed_price = _bedprice;
	}

	void set_num_of_beds(int _numofbeds)
	{
		num_of_beds = _numofbeds;
	}

	int get_num_of_beds()
	{
		return num_of_beds;
	}

	void set_bed_price(double _bedprice)
	{
		bed_price = _bedprice;
	}

	double get_bed_price()
	{
		return bed_price;
	}

	void available_room_details() override
	{	
		if (is_reseved == false)
		{

			room::available_room_details();
			cout << endl;
			cout << "                                             THE TYPE OF ROOM  ->   ~ STANDARD ~" << endl;
			cout << "                                             NUMBER OF BEDS    ->    " << num_of_beds << endl;
			cout << "                                             BED PRICE         ->    " << bed_price << "$" << endl << endl;

			if (is_reseved == false)
			{
				cout << "                                             ROOM STATUS       ->   ~ AVAILABLE ~" << endl;

			}

			else
			{
				cout << "                                             ROOM STATUS       ->   ~ NOT !! AVAILABLE ~" << endl;

			}
			cout << "                                            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		}
	}

	void all_room_details() override
	{
		room::all_room_details();
		cout << endl;
		cout << "                                             THE TYPE OF ROOM  ->   ~ STANDARD ~" << endl;
		cout << "                                             NUMBER OF BEDS    ->    " << num_of_beds << endl;
		cout << "                                             BED PRICE         ->    " << bed_price << "$" << endl << endl;

		if (is_reseved == false)
		{
			cout << "                                             ROOM STATUS       ->   ~ AVAILABLE ~" << endl;

		}

		else
		{
			cout << "                                             ROOM STATUS       ->   ~ NOT !! AVAILABLE ~" << endl;

		}
		cout << "                                            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}

    void one_room_details() override
	{
		room::one_room_details();
		cout << endl;
		cout << "                                       TYPE OF ROOM                 :->   " << "~ STANDARD ~"<< endl;
		cout << "                                                                            -------- " << endl;
		cout << "                                       NUMBER OF BEDS               :->     -   " << num_of_beds << "  -" << endl;
		cout << "                                                                            -------- " << endl;
		cout << "                                                                            -------- " << endl;
		cout << "                                       BED PRICE                    :->     -  " << bed_price << "$ -" << endl;
		cout << "                                                                            -------- " << endl;
		cout << endl;
	}

	void price() override
	{
		room::price();
		price_of_res = 0;
		price_of_res = (bed_price * num_of_beds)*get_days_of_reservation();
		cout <<"    " << price_of_res << "  " << endl;
		cout << "                                                                            *********** " << endl;
		//total_price += price_of_res;
		cout << endl;
	}

	double pricee() override
	{
		room::pricee();
		total_price = 0;

		total_price += price_of_res;
		cout << "    " << total_price << "    " << endl;
		cout << "                                                                            *********** " << endl;
		cout << endl;
		return total_price;
	}

	double priceet() override
	{
		room::priceet();
		total_price = 0;
		total_price += price_of_res;
		return total_price;
	}

};

class sweetroom : public room{
private:

	double price_per_night;

public:

	double price_res = 0;
	double total = 0;

	sweetroom()
	{
		price_per_night = 0;
	}

	sweetroom(int _romnum, double _pricepernight)
	{
		price_per_night = _pricepernight;
	}

	void set_price_per_night(double _pricepernight)
	{
		price_per_night = _pricepernight;
	}

	double get_price_per_night()
	{
		return price_per_night;
	}
	
	void available_room_details() override
	{	
		if (is_reseved == false)
		{

			room::available_room_details();
			cout << endl;
			cout << "                                             THE TYPE OF ROOM  ->   ~ SWEET ~" << endl;
			cout << "                                             PRICE BER DAY     ->    " << price_per_night << "$" << endl << endl;

			if (is_reseved == false)
			{
				cout << "                                             ROOM STATUS       ->   ~ AVAILABLE ~" << endl;

			}

			else
			{
				cout << "                                             ROOM STATUS       ->   ~ NOT !! AVAILABLE ~" << endl;

			}
			cout << "                                            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		}
	}

	void all_room_details() override
	{
		room::all_room_details();
		cout << endl;
		cout << "                                             THE TYPE OF ROOM  ->   ~ SWEET ~" << endl;
		cout << "                                             PRICE PER NIGHT   ->    " << price_per_night << "$" << endl << endl;
		if (is_reseved == false)
		{
			cout << "                                             ROOM STATUS       ->   ~ AVAILABLE ~" << endl;

		}

		else
		{
			cout << "                                             ROOM STATUS       ->   ~ NOT !! AVAILABLE ~" << endl;

		}
		cout << "                                            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}

	void one_room_details() override
	{
		room::one_room_details();
		cout << endl;
		cout << "                                       THE TYPE OF ROOM             :->    ~ SWEET ~" << endl;
		cout << "                                                                            -------- " << endl;
		cout << "                                       PRICE PER NIGHT              :->      " << price_per_night << "$" <<endl;
		cout << "                                                                            -------- " << endl;
		cout << endl;
	}

	void price() override
	{
		room::price();
		price_res = 0;
		price_res = price_per_night*get_days_of_reservation();
		cout << "    " << price_res << "  " << endl;
		cout << "                                                                            *********** " << endl;
		//total += price_res;
		cout << endl;
	}

	double pricee() override
	{
		room::pricee();
		total = 0;
		total += price_res;
		cout << "    " << total << "    " << endl;
		cout << "                                                                            *********** " << endl;
		cout << endl;
		return total;
	}

	double priceet() override
	{
		room::priceet();
		total = 0;

		total += price_res;
		return total;
	}
};

class conferanceroom : public room{
private:

	int num_of_seats;
	double seat_price;

public:

	double price_re = 0;

	double totall = 0;

	conferanceroom()
	{
		num_of_seats = 0;
		seat_price = 0;
	}

	conferanceroom(int _romnum, int _numofseats, double _seatprice)
	{
		num_of_seats = _numofseats;
		seat_price = _seatprice;
	}

	void set_num_of_seats(int _numofseats)
	{
		num_of_seats = _numofseats;
	}

	int get_num_of_seats()
	{
		return num_of_seats;
	}

	void set_seat_price(double _seatprice)
	{
		seat_price = _seatprice;
	}

	double get_seat_price()
	{
		return seat_price;
	}

	void available_room_details() override
	{	
		if (is_reseved == false)
		{

			room::available_room_details();
			cout << endl;
			cout << "                                             THE TYPE OF ROOM  ->   ~ CONFERANCE ~" << endl;
			cout << "                                             NUMBER OF SEATS   ->    " << num_of_seats << endl;
			cout << "                                             SEAT PRICE        ->    " << seat_price << "$" << endl << endl;

			if (is_reseved == false)
			{
				cout << "                                             ROOM STATUS       ->   ~ AVAILABLE ~" << endl;

			}

			else
			{
				cout << "                                             ROOM STATUS       ->   ~ NOT !! AVAILABLE ~" << endl;

			}
			cout << "                                            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		}
	}

	void all_room_details() override
	{
		room::all_room_details();
		cout << endl;
		cout << "                                             THE TYPE OF ROOM  ->   ~ CONFERANCE ~" << endl;
		cout << "                                             NUMBER OF SEATS   ->    " << num_of_seats << endl;
		cout << "                                             SEAT PRICE        ->    " << seat_price << "$" << endl << endl;

		if (is_reseved == false)
		{
			cout << "                                             ROOM STATUS       ->   ~ AVAILABLE ~" << endl;

		}

		else
		{
			cout << "                                             ROOM STATUS       ->   ~ NOT !! AVAILABLE ~" << endl;

		}
		cout << "                                            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}

	void one_room_details() override
	{
		room::one_room_details();
		cout << endl;
		cout << "                                       TYPE OF ROOM                 :->   " << "~ CONFERANCE ~" << endl;
		cout << "                                                                            -------- " << endl;
		cout << "                                       NUMBER OF SEATS              :->        " << num_of_seats << endl;
		cout << "                                                                            -------- " << endl;
		cout << "                                                                            -------- " << endl;
		cout << "                                       SEAT PRICE                   :->        " << seat_price << "$" << endl;
		cout << "                                                                            -------- " << endl;
		cout << endl;
	}

	void price() override
	{
		room::price();
		price_re = 0;
		price_re = (num_of_seats*seat_price)*get_days_of_reservation();
		cout << "    " << price_re << "    " << endl;
		cout << "                                                                            *********** " << endl;
		//totall += price_re;
		cout << endl; 
	}

	double pricee() override
	{
		room::pricee();
		totall = 0;
		totall += price_re;
		cout << "    " << totall << "  " << endl;
		cout << "                                                                            *********** " << endl;
		cout << endl;
		return totall;
	}

	double priceet() override
	{
		room::priceet();
		totall = 0;

		totall += price_re;
		return totall;
	}
};

class flooor{
private:

	int floor_num;
	int num_of_rooms;
	
public:
	vector<room*>list_of_room;
	
	double priceee = 0;

	flooor()
	{
		floor_num = 0;
		num_of_rooms = 0;
	}
	
	flooor(int _floornum, int _numofrooms)
	{
		floor_num = _floornum;
		num_of_rooms = _numofrooms;
	}

	void set_floor_num(int _floornum)
	{
		floor_num = _floornum;
	}

	int get_floor_num()
	{
		return floor_num;
	}

	void set_num_of_rooms(int _numofrooms)
	{
		num_of_rooms = _numofrooms;
	}

	int get_num_of_rooms()
	{
		return num_of_rooms;
	}

	void available_floor_details()
	{
			cout << endl;
			cout << "                                            ++++++++++++++++++++++++++++++++++++++++++++++" << endl;
			cout << "                                            ++  FLOOR  :  " << floor_num;
			cout << "                             ++ " << endl;
			cout << "                                            ++++++++++++++++++++++++++++++++++++++++++++++";
			cout << endl;
	}

	void avaialble_room_in_floor()
	{
		bool y = true;

		for (int i = 0; i < list_of_room.size(); i++)
		{	
			if (list_of_room[i]->get_is_reseved() == false)
			{
				list_of_room[i]->available_room_details();
				y = false;
				cout << endl;
			}
		}

		if (y)
		{
			cout << endl << endl;
			cout << "                                                !! !!!!!!!!!!!!!!!!! !!" << endl;
			cout << "                                                !! HOTEL IS COMPLETE !!" << endl;
			cout << "                                                !! !!!!!!!!!!!!!!!!! !!" << endl << endl;
		}
	}

	void all_floor_details()
	{
		cout << endl;
		cout << "                                            ++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << "                                            ++  FLOOR  :  " << floor_num;
		cout << "                             ++ " << endl;
		cout << "                                            ++  NUMBER OF ROOMS  :  " << num_of_rooms;
		cout << "                   ++ " << endl;
		cout << "                                            ++++++++++++++++++++++++++++++++++++++++++++++";
		cout << endl;
	}

	void all_room_in_floor()
	{
		for (int i = 0; i < list_of_room.size(); i++)
		{
			list_of_room[i]->all_room_details();
			cout << endl;
		}
	}

	void reserve(int ronum)

	{
		bool x = true;

		for (int i = 0; i < list_of_room.size(); i++)
		{

			if (ronum == list_of_room[i]->get_room_num())
			{

				if (list_of_room[i]->is_reseved_or_not(ronum) == false)
				{
					int days;
					cout << endl << endl;
					cout << "                                       ENTER YOUR DAYS RESERVATION  :->  ";
					cin >> days;

					cout << endl << endl;
					list_of_room[i]->reserve_room(ronum);
					list_of_room[i]->set_days_of_reservation(days);
					list_of_room[i]->one_room_details();
					list_of_room[i]->price();
					x = false;
					break;
					cout << endl;
				}
			}
			
		}
		if (x)
		{
			cout << "                                       ROOM NUMBER IS WRONG !!!!!  " << endl << endl << endl;
		}

		/*for (int i = 0; i < list_of_room.size(); i++)
		{
			if (ronum != list_of_room[i]->get_room_num())
			{
				
				break;
			}
		}*/
	}

	void cancle(int ronumm)

	{
		bool x = false;

		for (int i = 0; i < list_of_room.size(); i++)
		{

			if (ronumm == list_of_room[i]->get_room_num())
			{
				if (list_of_room[i]->is_reseved_or_not(ronumm) == true)
				{	
					cout << endl << endl;
					list_of_room[i]->canclee(ronumm);
					list_of_room[i]->set_days_of_reservation(0);
					list_of_room[i]->one_room_details();
					list_of_room[i]->price();
					x = false;
					break;
					cout << endl;
				}
			}

		}
		if (x)
		{
			cout << "                                       ROOM NUMBER IS WRONG !!!!!  " << endl << endl << endl;
		}
	}


	void check(int ronuumm)

	{

		bool x = true;

		for (int i = 0; i < list_of_room.size(); i++)
		{

			if (ronuumm == list_of_room[i]->get_room_num())
			{
				if (list_of_room[i]->is_reseved_or_not(ronuumm) == true)
				{
					cout << endl << endl;
					list_of_room[i]->check(ronuumm);
					list_of_room[i]->one_room_details();
					list_of_room[i]->price();
					list_of_room[i]->set_days_of_reservation(0);

					cout << "                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
					cout << "                                        ~  SUCCESSFUL CHECK OUT  ~ " << endl;
					cout << "                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
					x = false;
					break;
					cout << endl;
				}
			}

		}
		if (x)
			{
				cout << "                                       ROOM NUMBER IS WRONG !!!!!  " << endl << endl << endl;
			}
		
	}

	void availablee_room_in_each_floor(int flor)
	{
		cout << endl << endl << endl;

		cout << "                                        AVAILABLE ROOM IN FLOOR  :->  " << flor <<  endl;
		cout << endl << endl;


		for (int i = 0; i < list_of_room.size(); i++)
		{
			list_of_room[i]->available_room_details();
		}

	}

	void informationn_about_room(int ron)
	{

		bool x = true;
		cout << endl << endl;

		for (int i = 0; i < list_of_room.size(); i++)
		{
			if (ron == list_of_room[i]->get_room_num())
			{
				list_of_room[i]->all_room_details();
				x = false;
				break;
			}

		}

		if (x)
		{
			cout << "                                            ROOM NUMBER IS WRONG !!!!!  " << endl << endl << endl;
		}
	}
		

	double floor_profit()
	{
			cout << endl;
			cout << "                                            ++++++++++++++++++++++++++++++++++++++++++++++" << endl;
			cout << "                                            ++               FLOOR  :     " << floor_num << "             ++ " << endl;
			cout << "                                            ++++++++++++++++++++++++++++++++++++++++++++++" << endl;
			priceee = 0;
			for (int i = 0; i < list_of_room.size(); i++)
			{
				priceee += list_of_room[i]->pricee();
			}
			cout << endl;
			cout << "                                            ----------------------" << endl;
			cout << "                                            - TOTAL FLOOR PROFIT -          ~ " <<   priceee   << " ~" << endl;
			cout << "                                            ----------------------" << endl;
			cout << endl;
			return priceee;
	}

	double floor_profiitt()
	{
		int p = 0;

		for (int i = 0; i < list_of_room.size(); i++)
		{
			p += list_of_room[i]->priceet();
		}
		return p;
	}

};

class hotel{

public:

	vector<flooor> list_of_floor ;

	void get_all_profit_of_floor()
	{
		for (int i = 0; i <list_of_floor.size(); i++)
		{
			list_of_floor[i].floor_profit();
		}
	}

	void get_all_profit_of_hotel()
	{
		int profit = 0;

		for (int i = 0; i <list_of_floor.size(); i++)
		{
			x[i]= list_of_floor[i].floor_profiitt();
			profit += x[i];
		}

		for (int i = 0; i <list_of_floor.size(); i++)
		{
			cout << endl;
			cout << "                          ++++++++++++++++++++++++++++++++++++++++++++++" << endl;
			cout << "                                            FLOOR  :     " << list_of_floor[i].get_floor_num() 
				<< "              " << " TOTAL PROFIT OF FLOOR  ->         " << x[i];
			cout << "                                    ++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		}
		cout << endl << endl << endl << endl;
		cout << "                                       ************************" << endl;
		cout << "                                         TOTAL PROFIT OF HOTEL   ->     :     " << profit << endl;
		cout << "                                       ************************" << endl << endl << endl;

	}

	void get_available_room_in_hotel()
	{
		for (int i = 0; i < list_of_floor.size(); i++)
		{
			    list_of_floor[i].available_floor_details();
				list_of_floor[i].avaialble_room_in_floor();
		}	

	}

	void get_all_room_in_hotel()
	{
		for (int i = 0; i < list_of_floor.size(); i++)
		{
			list_of_floor[i].all_floor_details();
			list_of_floor[i].all_room_in_floor();
		}
	}

	void reseervation_room( int _romnum )
	{
		int orignum = _romnum;
		int r = 0;
		while (_romnum > 0)
		{
			r = _romnum % 10;
			_romnum = _romnum / 10;
		}
			list_of_floor[r-1].reserve(orignum);
	}

	void cancle_reervation(int _romnuum)
	{
		int orignum = _romnuum;
		int r = 0;
		while (_romnuum > 0)
		{
			r = _romnuum % 10;
			_romnuum = _romnuum / 10;
		}
		list_of_floor[r - 1].cancle(orignum);
	}

	void available_room_in_each_floor()
	{
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		
		cout << "                                                                     ------" << endl;
		cout << "                                            NUMBER OF FLOORS     :-> " << "- " << list_of_floor.size() <<"  -"<< endl;
		cout << "                                                                     ------" << endl;

		int flornum;

		cout << endl << endl;

		cout << "                                            ENTER FLOOR NUMBER   :-> ";

		cin >> flornum;

		if (flornum > 0 && flornum < list_of_floor.size()+1)
		{
			list_of_floor[flornum - 1].availablee_room_in_each_floor(flornum);
		}
		else
		{
			cout << endl << endl;
			cout << "					    WRONG FLOOR NUMBER  !!!! " << endl;
		}
	}

	void information_about_room()
	{

		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;

		cout << "                                            ENTER ROOM NUMBER   :-> ";
		int roomn;
		cin >> roomn;

		int orignum = roomn;
		int r = 0;
		while (roomn > 0)
		{
			r = roomn % 10;
			roomn = roomn / 10;
		}
		list_of_floor[r - 1].informationn_about_room(orignum);
		
	}

	void check_out(int _romnuuum)
	{
		int orignum = _romnuuum;
		int r = 0;
		while (_romnuuum > 0)
		{
			r = _romnuuum % 10;
			_romnuuum = _romnuuum / 10;
		}
		list_of_floor[r - 1].check(orignum);
	}
};

hotel hot;

void main_menu();

void close()

{

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	cout << "                                            ++++++++++++++++++++++++++++++++++++++++++++++";

	cout << endl << "                                            + THANKS FOR USING HOTEL RESERVATION SYSTEM  + " << endl;

	cout << "                                            ++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;

	cout << endl << endl << endl << endl << endl << endl << endl << endl;

	cout << endl << endl << endl << "           *-*-*-*-*-*-*-*-*-* ";

	cout << endl << "MADE BY :  *   W i L L L y   * " << endl;

	cout << "           *-*-*-*-*-*-*-*-*-* " << endl << endl;

	cout << endl;
	system("pause");
	exit(0);
}

void reservation_menu()
{

	do{

		cout << endl << "                                                      ************************* ";

		cout << endl << "                                                      * R.E.S.E.R.V.A.T.I.O.N * ";

		cout << endl << "                                                      *        MAIN MENU      * ";

		cout << endl << "                                                      ************************* ";

		cout << endl << endl << endl;

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 01- AVAILABLE ROOMS FOR BOOKING.                ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 02- RESERVATION ROOM.                           ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 03- RETURN TO RECEPTION MENU.                   ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;

		cout << "                                                 SELECT YOUR OPTION ( 1 - 3 ) : ";

		int num;

		cin >> num;

		cout << endl << endl << endl;

		system("cls");

		if (num == 1)

		{

			hot.get_available_room_in_hotel();

			system("pause");
			if (cin.get() == '\n')
			{
				system("cls");
			}
		}

		else if (num == 2)

		{
			
			int room___num;

			cout << endl << endl << endl << endl << endl;
			cout << "                                       ENTER YOUR ROOM NUMBER       :->  ";
			cin >> room___num;
			cout << endl << endl;

			hot.reseervation_room(room___num);

			system("pause");
			if (cin.get() == '\n')
			{
				system("cls");
			}
		}

		else if (num == 3)

		{

			main_menu();

		}

	} while (true);

}

void rooms_information_menu()
{


	do{

		cout << endl << "                                                      ************************* ";

		cout << endl << "                                                      * I.N.F.O.R.M.A.T.I.O.N * ";

		cout << endl << "                                                      *       MAIN MENU       * ";

		cout << endl << "                                                      ************************* ";

		cout << endl << endl << endl;

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 01- ALL HOTEL ROOMS.                            ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 02- INFORMATION ABOUT A ROOM.                   ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 03- INFORMATION ABOUT EACH FLOOR.               ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 04- RETURN TO RECEPTION MENU.                   ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;

		cout << "                                                 SELECT YOUR OPTION ( 1 - 4 ) : ";

		int num;

		cin >> num;

		cout << endl << endl << endl;

		system("cls");

		if (num == 1)

		{

			hot.get_all_room_in_hotel();
			system("pause");
			if (cin.get() == '\n')
			{
				system("cls");
			}

		}

		if (num == 2)

		{

			hot.information_about_room();
			system("pause");
			if (cin.get() == '\n')
			{
				system("cls");
			}
			
		}

		if (num == 3)

		{

			hot.available_room_in_each_floor();
			system("pause");
			if (cin.get() == '\n')
			{
				system("cls");
			}

		}

		else if (num == 4)

		{

			main_menu();

		}

	} while (true);

}

void profit_of_hotel_menu()
{

	do{

		cout << endl << "                                                          ***************** ";

		cout << endl << "                                                          *  P.R.O.F.I.T  * ";

		cout << endl << "                                                          *   MAIN MENU   * ";

		cout << endl << "                                                          ***************** ";

		cout << endl << endl << endl;

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 01- PROFIT FOR EVERY FLOOR.                     ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 02- ALL PROFIT OF HOTEL.                        ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 03- RETURN TO RECEPTION MENU.                   ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;

		cout << "                                                 SELECT YOUR OPTION ( 1 - 3 ) : ";

		int num;

		cin >> num;

		cout << endl << endl << endl;

		system("cls");

		if (num == 1)

		{

			hot.get_all_profit_of_floor();
			system("pause");
			if (cin.get() == '\n')
			{
				system("cls");
			}

		}

		else if (num == 2)

		{

			hot.get_all_profit_of_hotel();
			system("pause");
			if (cin.get() == '\n')
			{
				system("cls");
			}

		}


		else if (num == 3)

		{

			main_menu();

		}

	} while (true);

}

void main_menu()
{
	do{

		cout << endl << "                                                    ************************ ";

		cout << endl << "                                                    *   R.E.C.E.P.T.I.O.N  *";

		cout << endl << "                                                    *       MAIN MENU      *";

		cout << endl << "                                                    ************************ ";

		cout << endl << endl << endl;

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 01- MAKE RESERVATION.                           ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 02- CHECK OUT.                                  ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 03- CANCLE RESERVATION.                         ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 04- ROOMS INFORMATION.                          ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 05- THE TOTAL PROFIT OF HOTEL.                  ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		cout << "                                     ~ 06- EXIT.                                       ~" << endl;  // done

		cout << "                                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;

		cout << "                                                 SELECT YOUR OPTION ( 1 - 6 ) : ";

		int num;

		cin >> num;

		cout << endl << endl << endl;

		system("cls");

		if (num == 1)

		{

			reservation_menu();

		}

		else if (num == 2)

		{

			int roomnuuum;
			cout << endl << endl << endl << endl << endl;
			cout << "                                       ENTER YOUR ROOM NUMBER       :->  ";
			cin >> roomnuuum;
			cout << endl << endl;

			hot.check_out(roomnuuum);
			system("pause");
			if (cin.get() == '\n')
			{
				system("cls");
			}

		}

		else if (num == 3)

		{

			int roomnuum;
			cout << endl << endl << endl << endl << endl;
			cout << "                                       ENTER YOUR ROOM NUMBER       :->  ";
			cin >> roomnuum;
			cout << endl << endl;
			hot.cancle_reervation(roomnuum);
			system("pause");
			if (cin.get() == '\n')
			{
				system("cls");
			}

		}


		else if (num == 4)

		{

			rooms_information_menu();

		}

		else if (num == 5)

		{

			profit_of_hotel_menu();

		}


		else if (num == 6)

		{

			close();

			break;

		}

	} while (true);
}

void welcome()
{

	cout << endl << endl << endl;

	cout << "                                                         **~**~**~**~**~**" << endl;

	cout << "                                                         ~*   WELCOME   *~" << endl;

	cout << "                                                         **~**~**~**~**~**" << endl;

	cout << endl << endl << endl;

	cout << endl << "                                                           -H-O-T-E-L- " << endl;

	cout << endl << "                                                          -RESERVATION- " << endl;

	cout << endl << "                                                          -S-Y-S-T-E-M- " << endl;

	cout << endl << endl << endl << endl << endl << endl;

	cout << endl << "                                                    CLICK  :ENTER:  TO CONTINUE " << endl;

	cout << endl << endl << endl << "           *-*-*-*-*-*-*-*-*-* ";

	cout << endl << "MADE BY :  *   W i L L L y   * " << endl;

	cout << "           *-*-*-*-*-*-*-*-*-* " << endl;

	if (cin.get() == '\n')
	{
		system("cls");
	}

}

//void configuration()
//{
//	fstream f;
//	string s;
//	string lines[11];
//	f.open("asd.txt", ios::in);
//	if (f.is_open())
//	{
//		for (int i = 0; i<11; i++)
//		{
//			getline(f, s);
//			lines[i] = s;
//		}
//	}
//	
//	numberOffloors = lines[0][7];
//	cout << numberOffloors << endl;
//	//
//	number_of_rooms_in_floor_1 = lines[1][15];
//	room_number_1 = lines[2].substr(9, 3);
//	number_beds_1 = lines[2].substr(13, 1);
//	bed_price_1 = lines[2].substr(15, 2);
//	cout << number_of_rooms_in_floor_1 << endl << room_number_1 << endl << number_beds_1 << endl << bed_price_1 << endl;
//
//	//
//	room_number_2 = lines[3].substr(9, 3);
//	number_beds_2 = lines[3].substr(13, 1);
//	bed_price_2 = lines[3].substr(15, 2);
//	cout << room_number_2 << endl << number_beds_2 << endl << bed_price_2 << endl;
//
//	//
//	room_number_c = lines[4].substr(11, 3);
//	number_seates_c = lines[4].substr(15, 2);
//	seat_price = lines[4].substr(18, 1);
//	cout << room_number_c << endl << number_seates_c << endl << seat_price << endl;
//
//	//
//	number_of_rooms_in_floor_2 = lines[5][15];
//	room_number_3 = lines[6].substr(9, 3);
//	number_beds_3 = lines[6].substr(13, 1);
//	bed_price_3 = lines[6].substr(15, 2);
//	cout << number_of_rooms_in_floor_2 << endl << room_number_3 << endl << number_beds_3 << endl << bed_price_3 << endl;
//
//	//
//	room_number_s = lines[7].substr(6, 3);
//	price_s = lines[7].substr(10, 3);
//	cout << room_number_s << endl << price_s << endl;
//
//	//
//	number_of_rooms_in_floor_3 = lines[8][15];
//	room_number_4 = lines[9].substr(9, 3);
//	number_beds_4 = lines[9].substr(13, 1);
//	bed_price_4 = lines[9].substr(15, 2);
//	cout << number_of_rooms_in_floor_3 << endl << room_number_4 << endl << number_beds_4 << endl << bed_price_4 << endl;
//
//	//
//	room_number_s2 = lines[10].substr(6, 3);
//	price_s2 = lines[10].substr(10, 3);
//	cout << room_number_s2 << endl << price_s2 << endl;
//
//}

void fake_data()
{

	/*room * r1 = new standardroom;
	r1->set_room_num(101);
	r1->set_days_of_reservation(0);
	r1->set_is_reseved(false);*/
	

	standardroom *st1 = new standardroom;
	st1->set_num_of_beds(2);
	st1->set_bed_price(25);
	st1->set_room_num(101);
    st1->set_days_of_reservation(0);
	st1->set_is_reseved(false);

	/*room * r2 = new standardroom;
	r2->set_room_num(102);
	r2->set_days_of_reservation(0);
	r2->set_is_reseved(false);*/

	standardroom *st2 = new standardroom;
	st2->set_num_of_beds(3);
	st2->set_bed_price(25);
	st2->set_room_num(102);
	st2->set_days_of_reservation(0);
	st2->set_is_reseved(false);

	/*room * r3 = new conferanceroom;
	r3->set_room_num(103);
	r3->set_days_of_reservation(0);
	r3->set_is_reseved(false);*/

	conferanceroom *co1 = new conferanceroom;
	co1->set_num_of_seats(30);
	co1->set_seat_price(5);
	co1->set_room_num(103);
	co1->set_days_of_reservation(0);
	co1->set_is_reseved(false);

	/*room * r4 = new standardroom;
	r4->set_room_num(201);
	r4->set_days_of_reservation(0);
	r4->set_is_reseved(false);*/

	standardroom *st3 = new standardroom;
	st3->set_num_of_beds(1);
	st3->set_bed_price(25);
	st3->set_room_num(201);
	st3->set_days_of_reservation(0);
	st3->set_is_reseved(false);

	/*room *r5 = new sweetroom;
	r5->set_room_num(202);
	r5->set_days_of_reservation(0);
	r5->set_is_reseved(false);*/

	sweetroom *sw1 = new sweetroom;
	sw1->set_price_per_night(300);
	sw1->set_room_num(202);
	sw1->set_days_of_reservation(0);
	sw1->set_is_reseved(false);

	/*room * r6 = new standardroom;
	r6->set_room_num(301);
	r6->set_days_of_reservation(0);
	r6->set_is_reseved(false);*/

	standardroom *st4 = new standardroom;
	st4->set_num_of_beds(3);
	st4->set_bed_price(25);
	st4->set_room_num(301);
	st4->set_days_of_reservation(0);
	st4->set_is_reseved(false);


	/*room * r7 = new sweetroom;
	r7->set_room_num(302);
	r7->set_days_of_reservation(0);
	r7->set_is_reseved(false);*/


	sweetroom *sw2 = new sweetroom;
	sw2->set_price_per_night(400);
	sw2->set_room_num(302);
	sw2->set_days_of_reservation(0);
	sw2->set_is_reseved(false);

	flooor *f1 = new flooor;
	f1->set_floor_num(1);
	f1->set_num_of_rooms(3);
	//f1->list_of_room.push_back(r1);
	f1->list_of_room.push_back(st1);
	

	//f1->list_of_room.push_back(r2);
	f1->list_of_room.push_back(st2);

	//f1->list_of_room.push_back(r3);
	f1->list_of_room.push_back(co1);

	hot.list_of_floor.push_back(*f1);

	flooor *f2 = new flooor;
	f2->set_floor_num(2);
	f2->set_num_of_rooms(2);

	//f2->list_of_room.push_back(r4);
	f2->list_of_room.push_back(st3);

	//f2->list_of_room.push_back(r5);
	f2->list_of_room.push_back(sw1);

	hot.list_of_floor.push_back(*f2);

	flooor *f3 = new flooor;
	f3->set_floor_num(3);
	f3->set_num_of_rooms(2);

	//f3->list_of_room.push_back(r6);
    f3->list_of_room.push_back(st4);

	//f3->list_of_room.push_back(r7);
	f3->list_of_room.push_back(sw2);

	hot.list_of_floor.push_back(*f3);

}

int main()
{

    welcome();

	fake_data();

	//configuration();

	main_menu();

    //hot.list_of_floor[0].list_of_room.push_back(*rr);
	//hot.list_of_floor[0].list_of_room[0].set_room_num(5);

	system("pause");

	return 0;
}
