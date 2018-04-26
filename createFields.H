    Info<< "Reading field p\n" << endl;

    volScalarField p
    (
        IOobject
        (
            "p",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ,
            IOobject::AUTO_WRITE
        ),
        mesh
    );


    Info<< "Reading transportProperties\n" << endl;

    IOdictionary transportProperties
    (
        IOobject
        (
            "transportProperties",
            runTime.constant(),
            mesh,
            IOobject::MUST_READ_IF_MODIFIED,
            IOobject::NO_WRITE
        )
    );

    Info<< "Read viscosity Mu\n" << endl;

    dimensionedScalar Mu
    (
        transportProperties.lookup("Mu")
    );

    Info<< "Read height h" << endl;

    dimensionedScalar h
    (
        transportProperties.lookup("h")
    );