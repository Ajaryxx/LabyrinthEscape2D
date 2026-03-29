#include "PCH.hpp"
#include "core/Application.hpp"
#include "core/Window.hpp"

Core::Application::Application(const ApplicationSpecification& specification)
{
	this->m_specification = specification;
	this->m_app = this;

	m_Window = std::make_unique<Window>(specification.windowSpecification);


}
Core::Application::~Application()
{

}

void Core::Application::Run()
{
	if (m_Window->IsOpen())
	{

	}
}