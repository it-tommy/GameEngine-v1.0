#pragma once

#ifdef EGN_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
	printf("GameEngine enrty......\n");
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}


#endif
