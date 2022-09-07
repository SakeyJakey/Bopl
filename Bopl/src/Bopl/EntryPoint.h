#pragma once

#ifdef BOPL_PLATFORM_WINDOWS

extern Bopl::Application* Bopl::CreateApplication();

int main(int argc, char** argv) {
	printf("lolz");
	auto app = Bopl::CreateApplication();
	app->Run();
	delete app;
}

#endif // BOPL_PLATFORM_WINDOWS