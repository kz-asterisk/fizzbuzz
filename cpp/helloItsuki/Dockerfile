FROM gcc:10.2 AS build-env
ADD . /app
WORKDIR /app
RUN g++ helloItsuki.cpp -o helloItsuki

FROM gcr.io/distroless/cc
COPY --from=build-env /app /app
WORKDIR /app
CMD ["./helloItsuki"]
