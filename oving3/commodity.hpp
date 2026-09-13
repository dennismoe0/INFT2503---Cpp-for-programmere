// name, id, price
// get_name, id, prive, set price, get price with sales tax
// pris uten moms (sales tax) lagres i objektet, get_price skal returnere.

// get_price() og get...tax() ta antall enheter som argument
// regne ut prisen for x enheter med og uten moms.
// moms er global konstant
#pragma once
#include <iostream>
#include <string>

const double tax = 0.25;

class Commodity
{
public:
  // string name, id (varenr), price per unit
  Commodity(const std::string &unit_name, long id, double unit_price_no_tax);
  const std::string &get_name() const;
  long get_id() const;
  double get_price(double quantity) const;
  double get_price() const;
  double get_price_with_sales_tax(double quantity) const;

  void set_price(double new_unit_price);

private:
  std::string name;
  long id;
  double unit_price_no_tax;
};
