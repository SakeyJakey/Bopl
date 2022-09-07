#include <Bopl.h>

class Sandbox : public Bopl::Application {

public:
	Sandbox() {

	}

	~Sandbox() {

	}

};

int main() {
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}

Bopl::Application* Bopl::CreateApplication() {
	return new Sandbox();
}