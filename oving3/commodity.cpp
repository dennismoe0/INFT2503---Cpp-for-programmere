#include "commodity.hpp"
#include <iostream>
#include <string>

Commodity::Commodity(const std::string &name_, long id_, double unit_price_no_tax_) : name(name_), id(id_), unit_price_no_tax(unit_price_no_tax_)
{
}

// double Circle::get_area() const
// {
//   return pi * radius * radius;
// }
const std::string &Commodity::get_name() const
{
  return name;
}
long Commodity::get_id() const
{
  return id;
}
double Commodity::get_price(double quantity) const
{
  return unit_price_no_tax * quantity;
}
double Commodity::get_price() const
{
  return unit_price_no_tax;
}
double Commodity::get_price_with_sales_tax(double quantity) const
{
  return quantity * unit_price_no_tax * (1 + tax);
}
void Commodity::set_price(double new_unit_price)
{
  unit_price_no_tax = new_unit_price;
}