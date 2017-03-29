/*
  A simple program that simulates 5 MM1 queues at an airport. The first queue
  feeds 3 other queues that work in parallel. These feed a final queue.
  Simulation runs until error below threshold and, at the end,
  a performance evaluation report is shown, and logs are generated
  for plotting and analysis.
*/

using namespace std;

#include <random>
#include "customer.h"
#include "mm1_queue.h"


std::random_device rd;

void pause()
{
 std::string sInputString;
 // Wait for input from stdin (the keyboard)
 cout << "Continue (y)?";
 std::cin >> sInputString;
}



int main(int argc, char* argv[])
{
	int next = 0;
	//   test_random_number_generator();

	for (int cur_lambda = 3; cur_lambda < 34; cur_lambda++)
	{

		//TODO Create MM1_Queue objects to capture the airport senario.

		MM1_Queue   Checkin;
		Checkin.set_file_names("CHeckin_log.txt","01_wait.txt","01_service.txt");
		Checkin.set_lambda(6);   // for this assignment this is set to a variable from the for loop.
		Checkin.set_mu(53);
		Checkin.initialize();
		Checkin.set_seed(1, rd());
		Checkin.is_within_confidence_interval();

		MM1_Queue    Securitygate1;
		Securitygate1.set_file_names("securitygate1_log.txt", "01_wait.txt", "01_service.txt");
		Securitygate1.set_lambda(0);   // for this assignment this is set to a variable from the for loop.
		Securitygate1.set_mu(20);
		Securitygate1.initialize();
		Securitygate1.set_seed(rd(), rd());
		Securitygate1.autogenerate_new_arrivals(false);
		Securitygate1.is_within_confidence_interval();

		MM1_Queue    Securitygate2;
		Securitygate2.set_file_names("securitygate2_log.txt", "01_wait.txt", "01_service.txt");
		Securitygate2.set_lambda(0);   // for this assignment this is set to a variable from the for loop.
		Securitygate2.set_mu(20);
		Securitygate2.initialize();
		Securitygate2.set_seed(rd(), rd());
		Securitygate2.autogenerate_new_arrivals(false);
		Securitygate2.is_within_confidence_interval();

		MM1_Queue    Securitygate3;
		Securitygate3.set_file_names("securitygate3_log.txt", "01_wait.txt", "01_service.txt");
		Securitygate3.set_lambda(0);   // for this assignment this is set to a variable from the for loop.
		Securitygate3.set_mu(20);
		Securitygate3.initialize();
		Securitygate3.set_seed(rd(), rd());
		Securitygate3.autogenerate_new_arrivals(false);
		Securitygate3.is_within_confidence_interval();

		MM1_Queue    Boarding;
		Boarding.set_file_names("boarding_log.txt", "01_wait.txt", "01_service.txt");
		Boarding.set_lambda(6);   // for this assignment this is set to a variable from the for loop.
		Boarding.set_mu(80);
		Boarding.initialize();
		Boarding.set_seed(rd(), rd());
		Boarding.is_within_confidence_interval();
	

		//for (
		!Checkin.is_within_error_range(0.002) ||
			!Securitygate1.is_within_error_range(0.002) ||
			!Securitygate2.is_within_error_range(0.002) ||
			!Securitygate3.is_within_error_range(0.002) ||
			!Boarding.is_within_error_range(0.002);
		

			//TODO: add is_within_error_range check

		

			Customer cust = Checkin.process_next_event();
			Customer cust2 = Securitygate1.process_next_event();
			Customer cust3 = Securitygate2.process_next_event();
			Customer cust4 = Securitygate3.process_next_event();
			Customer cust5 = Boarding.process_next_event();
			//TODO: one more process_next_event for the last object.
		

			if (cust.get_type() == Customer::COMPLETED())
			{
				switch (next)
				{
				case 0:

					Securitygate1.add_external_arrival();
					//name
					break;
				case 1:
					Securitygate2.add_external_arrival();
					break;
				case 2:
					Securitygate3.add_external_arrival();
					break;
				}

				next++;
				if (next % 3 == 0) next = 0;
			}
			if (cust2.get_type() == Customer::COMPLETED() || cust3.get_type() == Customer::COMPLETED() || cust4.get_type() == Customer::COMPLETED())
			{
				Boarding.add_external_arrival();
				//TODO add_external_arrival(); on your final boarding MM1_Queue object
			}
		
	    
		Checkin.get_current_time();
		Checkin.plot_results_output();
		Checkin.output(); cout << "*********" << endl;
		Securitygate1.output(); cout << "*********" << endl;
		Securitygate2.output(); cout << "*********" << endl;
		Securitygate3.output(); cout << "*********" << endl;
		Boarding.output(); cout << "*********" << endl;


   //TODO Output statistics airport senario.



   //**************************************************************************



   }

   return(0);
}

