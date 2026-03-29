#include "PCH.hpp"
#include "core/Window.hpp"

Core::Window::Window(const WindowSpecification& spec)
{
	this->m_spec = spec;

	m_Window = sf::RenderWindow(spec.WindowSize, spec.title, spec.style, spec.state, spec.ContextSettings);
	m_Window.setVerticalSyncEnabled(spec.vSync);
	m_Window.setFramerateLimit(spec.fpsLimit);

}
Core::Window::~Window()
{

}