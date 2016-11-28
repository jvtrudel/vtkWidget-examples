/* Demonstrate the use of vtkLineWidget2
 *
 */


#include <vtkLineWidget2.h>
#include <vtkLineWidget.h>

#include <vtkLineRepresentation.h>

#include <vtkSmartPointer.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>

int main (int, char *[])
{


    vtkSmartPointer<vtkLineRepresentation> lineRep=
            vtkSmartPointer<vtkLineRepresentation>::New();

    vtkSmartPointer<vtkLineWidget2> lineWidget=
            vtkSmartPointer<vtkLineWidget2>::New();
  //  lineWidget->SetPoint1(0.,0.,0.);
  //  lineWidget->SetPoint2(0.,0.,0.);
    lineWidget->SetRepresentation(lineRep);


    vtkSmartPointer<vtkLineWidget> line1Widget=
            vtkSmartPointer<vtkLineWidget>::New();
    line1Widget->SetPoint1(0.,0.,0.);
    line1Widget->SetPoint2(0.,1.,1.);

    // A renderer and render window
    vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New();
    vtkSmartPointer<vtkRenderWindow> renderWindow = vtkSmartPointer<vtkRenderWindow>::New();
    renderWindow->AddRenderer(renderer);

    // An interactor
    vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor = vtkSmartPointer<vtkRenderWindowInteractor>::New();
    renderWindowInteractor->SetRenderWindow(renderWindow);
  //  renderWindowInteractor->RemoveAllObservers();




    lineWidget->SetInteractor(renderWindowInteractor);
    lineWidget->EnabledOn();

    line1Widget->SetInteractor(renderWindowInteractor);
    line1Widget->EnabledOn();



    renderWindowInteractor->Initialize();
    renderWindow->Render();

    renderWindowInteractor->Start();

    return EXIT_SUCCESS;



}

