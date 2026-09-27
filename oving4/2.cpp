#include <gtkmm.h>

class Window : public Gtk::Window
{
public:
  Gtk::Box box;
  Gtk::Label firstNameLabel;
  Gtk::Entry firstName;
  Gtk::Label lastNameLabel;
  Gtk::Entry lastName;
  Gtk::Button button;
  Gtk::Label label;

  Window() : box(Gtk::Orientation::ORIENTATION_VERTICAL)
  {
    set_title("Name combiner");
    set_default_size(300, 300);

    firstNameLabel.set_text("First Name");
    lastNameLabel.set_text("Last Name");
    button.set_label("Combine names");

    box.pack_start(firstNameLabel);
    box.pack_start(firstName);
    box.pack_start(lastNameLabel);
    box.pack_start(lastName);
    box.pack_start(button);
    box.pack_start(label);
    add(box);
    show_all();

    button.signal_clicked().connect([this]()
                                    { label.set_text("Names combined: " + firstName.get_text() + " " + lastName.get_text()); });
  }
};

int main()
{
  auto app = Gtk::Application::create();
  Window window;
  return app->run(window);
}