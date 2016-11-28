/* Demonstrate the use of vtkPointWidget
 *
 */

#include <vtkPointWidget.h>
#include <vtkSmartPointer.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>

int main (int, char *[])
{
    vtkSmartPointer<vtkPointWidget> pointWidget = vtkSmartPointer<vtkPointWidget>::New();
    pointWidget->SetPosition(0.,0.,0.);



    // A renderer and render window
    vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New();
    vtkSmartPointer<vtkRenderWindow> renderWindow = vtkSmartPointer<vtkRenderWindow>::New();
    renderWindow->AddRenderer(renderer);

    // An interactor
    vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor = vtkSmartPointer<vtkRenderWindowInteractor>::New();
    renderWindowInteractor->SetRenderWindow(renderWindow);

    pointWidget->SetInteractor(renderWindowInteractor);
    pointWidget->EnabledOn();


    renderWindowInteractor->Initialize();
    renderWindow->Render();

    renderWindowInteractor->Start();

    return EXIT_SUCCESS;

}
