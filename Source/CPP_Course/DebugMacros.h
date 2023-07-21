#pragma once

#include "CoreMinimal.h"
#include "DrawDebugHelpers.h"

#define DRAW_SPHERE(Location) if (GetWorld()) DrawDebugSphere( GetWorld() , Location, 25.f, 24, FColor::Emerald, true);
#define DRAW_LINE(Location, EndLocation) if (GetWorld()) DrawDebugLine( GetWorld(), Location, EndLocation, FColor::Orange, true);
#define DRAW_POINT(Location) if (GetWorld())  DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Magenta, true);

#define DRAW_VECTOR(Location, EndLocation) if(GetWorld()) \
{\
DrawDebugLine( GetWorld(), Location, EndLocation, FColor::Orange, true);\
DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Magenta, true);\
}

#define DRAW_SPHERE_SingleFrame(Location) if (GetWorld()) DrawDebugSphere( GetWorld() , Location, 25.f, 24, FColor::Emerald, false, -1.f);
#define DRAW_LINE_SingleFrame(Location, EndLocation) if (GetWorld()) DrawDebugLine( GetWorld(), Location, EndLocation, FColor::Orange, false, -1.f);
#define DRAW_POINT_SingleFrame(Location) if (GetWorld())  DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Magenta, false, -1.f);

#define DRAW_VECTOR_SingleFrame(Location, EndLocation) if(GetWorld()) \
{\
DrawDebugLine( GetWorld(), Location, EndLocation, FColor::Orange, false, -1.f);\
DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Magenta, false, -1.f);\
}